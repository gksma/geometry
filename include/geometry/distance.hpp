/**
 * @file geometry/distance.hpp
 * @author HanHeum Cho (dhfz1794@naver.com)
 * @brief Distance class declaration for abstract distance
 * @version 1.0.0
 * @date 2023-12-28
 * @copyright Copyright (c) 2023 gksma, All Rights Reserved.
 */

// Copyright (c) 2023 gksma, All Rights Reserved.
// Authors: HanHeum Cho

#ifndef GKSMA_GEOMETRY_DISTANCE_HPP_
#define GKSMA_GEOMETRY_DISTANCE_HPP_

namespace gksma::geometry {
    /**
     * @brief The class for abstract distance
     */
    class Distance {
        public:
        enum class Type {
            kKilometer = 0,
            kMeter = 1,
            kCentimeter = 2,
            kMilimeter = 3,
            kMicrometer = 4,
            kNanoMeter = 5
        };
        protected:
        private:
    }
}

#endif
