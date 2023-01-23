#ifndef APRILTAG_ROS_APRILTAG_UMICH_WRAPPER_H_
#define APRILTAG_ROS_APRILTAG_UMICH_WRAPPER_H_

namespace apriltag_umich3 {
#include <apriltag.h>
#include <tag36h11.h>
#include <tag36h11.h>
#include <tag25h9.h>
#include <tag16h5.h>

struct FreeTagFamily {
  void operator()(apriltag_family_t *tf) const {
    free(tf->codes);
    free(tf);
  }
};

struct FreeTagDetector {
  void operator()(apriltag_detector_t *td) const {
    apriltag_detector_destroy(td);
  }
};

struct FreeTagDetection {
  void operator()(apriltag_detection_t *det) const {
    apriltag_detection_destroy(det);
  }
};

struct FreeImageU8 {
  void operator()(image_u8_t *im) const { image_u8_destroy(im); }
};

struct FreeZarray {
  void operator()(zarray_t *za) const { zarray_destroy(za); }
};

using TagFamilyPtr = std::unique_ptr<apriltag_family_t, FreeTagFamily>;
using TagDetectorPtr = std::unique_ptr<apriltag_detector_t, FreeTagDetector>;
using TagDetectionPtr = std::unique_ptr<apriltag_detection_t, FreeTagDetection>;
using ImageU8Ptr = std::unique_ptr<image_u8_t, FreeImageU8>;
using ZarrayPtr = std::unique_ptr<zarray_t, FreeZarray>;

} // namespace apriltag_umich

#endif // APRILTAG_ROS_APRILTAG_UMICH_WRAPPER_H_
