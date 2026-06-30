// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/LaneTrajectory.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_pkg/msg/detail/lane_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace interfaces_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: x_min_m
  {
    out << "x_min_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min_m, out);
    out << ", ";
  }

  // member: x_max_m
  {
    out << "x_max_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max_m, out);
    out << ", ";
  }

  // member: fit_error_m
  {
    out << "fit_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.fit_error_m, out);
    out << ", ";
  }

  // member: num_points
  {
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: x_min_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_min_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min_m, out);
    out << "\n";
  }

  // member: x_max_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_max_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max_m, out);
    out << "\n";
  }

  // member: fit_error_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fit_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.fit_error_m, out);
    out << "\n";
  }

  // member: num_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneTrajectory & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces_pkg

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_pkg::msg::LaneTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_pkg::msg::LaneTrajectory & msg)
{
  return interfaces_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_pkg::msg::LaneTrajectory>()
{
  return "interfaces_pkg::msg::LaneTrajectory";
}

template<>
inline const char * name<interfaces_pkg::msg::LaneTrajectory>()
{
  return "interfaces_pkg/msg/LaneTrajectory";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::LaneTrajectory>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::LaneTrajectory>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<interfaces_pkg::msg::LaneTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__TRAITS_HPP_
