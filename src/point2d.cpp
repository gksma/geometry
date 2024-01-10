/**
 * @file geometry/point2d.hpp
 * @author HanHeum Cho (dhfz1794@naver.com)
 * @brief Point class declaration with 2-dimension
 * @version 1.0.0
 * @date 2023-12-28
 * @copyright Copyright (c) 2023 gksma, All Rights Reserved.
 */

// Copyright (c) 2023 gksma, All Rights Reserved.
// Authors: HanHeum Cho

#include "geometry/point2d.hpp"
#include <cmath>

namespace gksma::geometry {
    Point2D::Point2D(double input_x, double input_y) : x_(input_x), y_(input_y) {}

    auto Point2D::CalculateDistance(const Point2D& target) const -> double {
        return std::sqrt(std::pow((x_ - target.x), 2) + std::pow((y_ - target.y_), 2));
    }

    auto Point2D::CalculateDistance(const Point2D& lhs, const Point2D& rhs) -> double {
        return std::sqrt(std::pow((lhs.x_ - rhs.x_), 2) +
                         std::pow((lhs.y_ - rhs.y_), 2));
    }

    auto Point2D::GetX() const -> double { return x_; }
    auto Point2D::GetY() const -> double { return y_; }
    auto Point2D::SetX(double input_x) -> void { x_ = input_x; }
    auto Point2D::SetY(double input_y) -> void { y_ = input_y; }
}