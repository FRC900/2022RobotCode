/* -*-c++-*--------------------------------------------------------------------
 * 2019 Bernd Pfrommer bernd.pfrommer@gmail.com
 */

#pragma once

#include "tagslam/measurements/measurements.h"
#include "tagslam/factor/coordinate.h"
#include "tagslam/vertex.h"
#include <vector>

namespace tagslam {
  namespace measurements {
    class Coordinate: public Measurements {
    public:
      typedef std::shared_ptr<Coordinate> CoordinateMeasurementsPtr;
      
      void writeDiagnostics(const GraphPtr &graph) override;

      // static functions
      static CoordinateMeasurementsPtr read(XmlRpc::XmlRpcValue config,
                                            TagFactory *fac);
    private:
    };
  }
}
