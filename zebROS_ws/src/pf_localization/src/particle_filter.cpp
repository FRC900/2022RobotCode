#define _USE_MATH_DEFINES

#include "pf_localization/particle_filter.hpp"
#include "pf_localization/world_model.hpp"
#include <geometry_msgs/PoseWithCovariance.h>
#include <cmath>
#include <angles/angles.h>
#include <ros/console.h>

std::ostream& operator<<(std::ostream& os, const Particle &p)
{
    os << "Particle(" << p.x_ << ", " << p.y_ << ", " << p.rot_ << ", " << p.weight_ << ")";
    return os;
}
std::ostream& operator<<(std::ostream &os, const PositionBeacon& b)
{
    os << "Beacon(" << b.x_ << ", " << b.y_ << ", " << b.type_ << ")";
    return os;
}
std::ostream& operator<<(std::ostream &os, const BearingBeacon& b)
{
    os << "Beacon(" << b.angle_ << ", " << b.type_ << ")";
    return os;
}

ParticleFilter::ParticleFilter(const WorldModel& w,
                               const WorldModelBoundaries &boundaries,
                               double ns, double rs, double rt, size_t n) :
                               num_particles_(n),
                               rng_(std::mt19937(0)),
                               pos_dist_(0, ns),
                               rot_dist_(0, rs),
                               rotation_threshold_(rt),
                               rot_thresh_dist_(0, rt),
                               world_(w) {
  init(boundaries);
}

void ParticleFilter::constrain_particles() {
  for (Particle& p : particles_) {
    world_.constrain_to_world(p);
  }
}

void ParticleFilter::init(const WorldModelBoundaries &boundaries) {
  const auto worldBoundaries = world_.get_boundaries();
  const double x_l = std::max(boundaries.x_min_, worldBoundaries.x_min_);
  const double x_u = std::min(boundaries.x_max_, worldBoundaries.x_max_);
  const double y_l = std::max(boundaries.y_min_, worldBoundaries.y_min_);
  const double y_u = std::min(boundaries.y_max_, worldBoundaries.y_max_);
  std::uniform_real_distribution<double> x_distribution(x_l, x_u);
  std::uniform_real_distribution<double> y_distribution(y_l, y_u);
  std::uniform_real_distribution<double> rot_distribution(0, 2 * M_PI);
  particles_.clear();
  for (size_t i = 0; i < num_particles_; i++) {
    const double x = x_distribution(rng_);
    const double y = y_distribution(rng_);
    const double rot = rot_distribution(rng_);
    particles_.emplace_back(Particle{x, y, rot});
  }
  normalize();
}

void ParticleFilter::reinit(){
  particles_.clear();
  init(world_.get_boundaries());
}

//Normalize weights to sum to 1
void ParticleFilter::normalize() {
  double sum = 0.0;
  for (const Particle& p : particles_) {
    sum += p.weight_;
  }
  if (sum == 0.0) {
    // If more than X camera observations come in and
    // we don't get any particles which even remotely
    // match, reinit the particles
    if (++resetCounter_ > 10) { // TODO : make me a config item
      ROS_WARN("Particle Filter : reinitializing due to bad convergence");
      resetCounter_ = 0;
      reinit();
    }
    else
    {
      for (Particle& p : particles_) {
        p.weight_ = 1.0 / particles_.size();
      }
    }
  } else {
    for (Particle& p : particles_) {
      p.weight_ /= sum;
	  }
  }
}

void ParticleFilter::noise_rot() {
  for (Particle& p : particles_) {
    p.rot_ += rot_dist_(rng_);
  }
}

void ParticleFilter::noise_pos() {
  for (Particle& p : particles_) {
    p.x_ += pos_dist_(rng_);
    p.y_ += pos_dist_(rng_);
  }
}

//Particles with higher weights are more likely to be resampled
void ParticleFilter::resample() {
  std::vector<Particle> new_particles;
  new_particles.reserve(num_particles_);
  for (size_t i = 0; i < num_particles_; i++) {
    const double r = ((double) rng_() - rng_.min()) / (rng_.max() - rng_.min());
    //std::cout << r << '\n';
    double a = 0;
    for (const Particle& p : particles_) {
      a += p.weight_;
      if (a > r) {
        new_particles.emplace_back(p);
        break;
      }
    }
  }
  particles_ = new_particles;
}

std::optional<geometry_msgs::PoseWithCovariance> ParticleFilter::predict() {
  double weight = 0;
  double x = 0;
  double y = 0;
  double s = 0;
  double c = 0;

  for (const Particle& p : particles_) {
    // Add weighted values to means
    x += p.x_ * p.weight_;
    y += p.y_ * p.weight_;
    c += cos(p.rot_) * p.weight_;
    s += sin(p.rot_) * p.weight_;
    weight += p.weight_;
  }
  // TODO - config item? tune me.
  if (fabs(weight) < 1e-6) {
    return std::nullopt;
  }

  // Divide by weight to get the weighted average
  x /= weight;
  y /= weight;
  c /= weight;
  s /= weight;
  double rot = atan2(s, c);

  double covariance[9] = {0};
  for (const Particle& p : particles_) {
    // Put distances into an array so they can be accessed in a loop
    double differences[3] = {p.x_ - x, p.y_ - y, angles::shortest_angular_distance(p.rot_, rot)};

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        int index = i * 3 + j;
        covariance[index] += differences[i] * differences[j] * p.weight_;
      }
    }
  }

  // Packing everything into PoseWithCovariance
  geometry_msgs::PoseWithCovariance pose;

  std::fill(std::begin(pose.covariance), std::begin(pose.covariance)+36, 1000);
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      // Offset to skip to z rotation
      int row = i > 1 ? i + 3 : i;
      int column = j > 1 ? j + 3 : j;
      pose.covariance[row * 6 + column] = covariance[i * 3 + j] / weight;
    }
  }

  pose.pose = Particle::poseFrom2D(x, y, rot);

  return pose;
}

bool ParticleFilter::motion_update(double delta_x, double delta_y, double delta_rot) {
  for (Particle& p : particles_) {
    // delta x and y are robot relative, since they come from the 
    // drive base twist message.  Particle coords are map centric,
    // so rotate the delta x, y values by the robot yaw in map
    // space to get map-centric x and y offsets this timestep
    const double c = cos(p.rot_ + delta_rot / 2.0);
    const double s = sin(p.rot_ + delta_rot / 2.0);
    const double abs_delta_x = delta_x * c - delta_y * s;
    const double abs_delta_y = delta_x * s + delta_y * c;
#ifdef CHECK_NAN
    // TODO - do we really want to return here, or should it try to
    // motion update the rest of the particles?
    // Maybe split the check - if d_x or d_y are inf/nan, nothing we can do
    // If a single particle rotation is inf/nan, reset it to 0 or a
    // a random number in [-pi,pi]?
    // Then hoist the check for d_x, d_y outside the loop, return false for
    // that case. Remove the return false here to the particles which do
    // pass are constrained properly
    if (!std::isfinite(delta_rot + abs_delta_x + abs_delta_y)) {
      return false;
    }
#endif
    p.rot_ += delta_rot;
    p.x_ += abs_delta_x;
    p.y_ += abs_delta_y;
  }
  constrain_particles();
  return true;
}

// Use rotation data from the IMU to update particles
// rotation component. Only do so if the particle's current
// rotation is > a configurable threshold. This allows particles
// to use camera data to correct orientation if the robot 
// IMU zero is slightly off and at the same time corrects for
// particles where the orientation is clearly wrong.
bool ParticleFilter::set_rotation(double rot) {
#ifdef CHECK_NAN
  if (!std::isfinite(rot)) {
    return false;
  }
#endif
  for (Particle& p : particles_) {
    if (fabs(angles::shortest_angular_distance(p.rot_, rot)) > rotation_threshold_) {
      p.rot_ = rot;
    }
  }
  noise_rot();
  return true;
}

//assigns a weight to each particle. The weight is the probability we'd see the given
//measurements given the std deviation of measurement noise and each particle location is correct
bool ParticleFilter::assign_weights(const std::vector<std::shared_ptr<BeaconBase>> &measurements,
		const std::vector<double> &sigmas) {
  if (measurements.empty()) {
    return false;
  }

  for (auto m: measurements) {
    beacons_seen_.insert(m->type_);
  }

#ifdef CHECK_NAN
  double test_sum = 0;
  for (const auto& b : measurements) {
    test_sum += b->debugSum();
  }
  if (!std::isfinite(test_sum)) {
    return false;
  }
#endif

  for (Particle& p : particles_) {
	  p.weight_ = world_.total_distance(p, measurements, sigmas);
  }
  normalize();
  return true;
}

const std::vector<Particle> &ParticleFilter::get_particles() const {
  return particles_;
}

const std::set<std::string> &ParticleFilter::get_beacons_seen() const {
  return beacons_seen_;
}

void ParticleFilter::clear_beacons_seen() {
  beacons_seen_.clear();
}

void ParticleFilter::check_particles(const char *file, int line) const {
  for (const auto &p : particles_)
  {
    if (!p.isValid())
    {
      ROS_INFO_STREAM("check_particles failed " << file << " : " << line);
      return;
    }
  }
}
