// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/LaneTrajectory.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/LaneTrajectory in the package interfaces_pkg.
typedef struct interfaces_pkg__msg__LaneTrajectory
{
  std_msgs__msg__Header header;
  bool valid;
  double a;
  double b;
  double c;
  double x_min_m;
  double x_max_m;
  double fit_error_m;
  int32_t num_points;
} interfaces_pkg__msg__LaneTrajectory;

// Struct for a sequence of interfaces_pkg__msg__LaneTrajectory.
typedef struct interfaces_pkg__msg__LaneTrajectory__Sequence
{
  interfaces_pkg__msg__LaneTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__LaneTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__STRUCT_H_
