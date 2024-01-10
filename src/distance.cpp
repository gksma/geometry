/**
 * @file distance.cpp
 * @author gksma (dhfz1794@naver.com)
 * @brief Distance class implementation for geometry
 * @version 1.0.0
 * @date 2024-01-10
 * @copyright Copyright (c) 2024 gksma, All Rights Reserved.
 */

// Copyright (c) 2023 gksma, All Rights Reserved.
// Authors: HanHeum Cho

#include "geometry/distance.hpp"

#include "gtest/gtest.h"

namespace gksma::geometry {
    TEST(GeometryDistance, Constructor) {
        Distance distance1;
        Distance distance2(distance1);
        Distance distance3(std::move(Distance()));
    }

    TEST(GeometryDistance, Constructor) {
        Distance distance1;
        auto distance2 = distance;
        auto distance3 = std::move(Distance());
    }
    TEST(GeometryDistance, ConstructorWithInputValue) {
        Distance distance1(1.0);
        Distance distance2(1.0, Distance::Type::kKilometer);
        Distance distance3(1.0, Distance::Type::kMeter);
        Distance distance4(1.0, Distance::Type::kCentimeter);
        Distance distance5(1.0, Distance::Type::kMillimeter);
        Distance distance6(1.0, Distance::Type::kMicrometer);
        Distance distance7(1.0, Distance::Type::kNanometer);
    }

    TEST(GeometryDistance, AssignmentOperator)
    {
        Distance distance1;
        auto distance2 = distance;
        auto distance3 = std::move(Distance());
    }
}