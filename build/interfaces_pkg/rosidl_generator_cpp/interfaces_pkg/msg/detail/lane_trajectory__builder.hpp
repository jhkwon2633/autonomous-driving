// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/LaneTrajectory.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_pkg/msg/detail/lane_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_LaneTrajectory_num_points
{
public:
  explicit Init_LaneTrajectory_num_points(::interfaces_pkg::msg::LaneTrajectory & msg)
  : msg_(msg)
  {}
  ::interfaces_pkg::msg::LaneTrajectory num_points(::interfaces_pkg::msg::LaneTrajectory::_num_points_type arg)
  {
    msg_.num_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

class Init_LaneTrajectory_fit_error_m
{
public:
  explicit Init_LaneTrajectory_fit_error_m(::interfaces_pkg::msg::LaneTrajectory & msg)
  : msg_(msg)
  {}
  Init_LaneTrajectory_num_points fit_error_m(::interfaces_pkg::msg::LaneTrajectory::_fit_error_m_type arg)
  {
    msg_.fit_error_m = std::move(arg);
    return Init_LaneTrajectory_num_points(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

class Init_LaneTrajectory_x_max_m
{
public:
  explicit Init_LaneTrajectory_x_max_m(::interfaces_pkg::msg::LaneTrajectory & msg)
  : msg_(msg)
  {}
  Init_LaneTrajectory_fit_error_m x_max_m(::interfaces_pkg::msg::LaneTrajectory::_x_max_m_type arg)
  {
    msg_.x_max_m = std::move(arg);
    return Init_LaneTrajectory_fit_error_m(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

class Init_LaneTrajectory_x_min_m
{
public:
  explicit Init_LaneTrajectory_x_min_m(::interfaces_pkg::msg::LaneTrajectory & msg)
  : msg_(msg)
  {}
  Init_LaneTrajectory_x_max_m x_min_m(::interfaces_pkg::msg::LaneTrajectory::_x_min_m_type arg)
  {
    msg_.x_min_m = std::move(arg);
    return Init_LaneTrajectory_x_max_m(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

class Init_LaneTrajectory_c
{
public:
  explicit Init_LaneTrajectory_c(::interfaces_pkg::msg::LaneTrajectory & msg)
  : msg_(msg)
  {}
  Init_LaneTrajectory_x_min_m c(::interfaces_pkg::msg::LaneTrajectory::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_LaneTrajectory_x_min_m(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

class Init_LaneTrajectory_b
{
public:
  explicit Init_LaneTrajectory_b(::interfaces_pkg::msg::LaneTrajectory & msg)
  : msg_(msg)
  {}
  Init_LaneTrajectory_c b(::interfaces_pkg::msg::LaneTrajectory::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_LaneTrajectory_c(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

class Init_LaneTrajectory_a
{
public:
  explicit Init_LaneTrajectory_a(::interfaces_pkg::msg::LaneTrajectory & msg)
  : msg_(msg)
  {}
  Init_LaneTrajectory_b a(::interfaces_pkg::msg::LaneTrajectory::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_LaneTrajectory_b(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

class Init_LaneTrajectory_valid
{
public:
  explicit Init_LaneTrajectory_valid(::interfaces_pkg::msg::LaneTrajectory & msg)
  : msg_(msg)
  {}
  Init_LaneTrajectory_a valid(::interfaces_pkg::msg::LaneTrajectory::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_LaneTrajectory_a(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

class Init_LaneTrajectory_header
{
public:
  Init_LaneTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneTrajectory_valid header(::interfaces_pkg::msg::LaneTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneTrajectory_valid(msg_);
  }

private:
  ::interfaces_pkg::msg::LaneTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::LaneTrajectory>()
{
  return interfaces_pkg::msg::builder::Init_LaneTrajectory_header();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__BUILDER_HPP_
