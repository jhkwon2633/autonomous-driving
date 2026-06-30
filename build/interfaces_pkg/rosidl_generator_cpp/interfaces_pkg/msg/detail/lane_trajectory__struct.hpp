// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/LaneTrajectory.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__LaneTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__LaneTrajectory __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneTrajectory_
{
  using Type = LaneTrajectory_<ContainerAllocator>;

  explicit LaneTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->x_min_m = 0.0;
      this->x_max_m = 0.0;
      this->fit_error_m = 0.0;
      this->num_points = 0l;
    }
  }

  explicit LaneTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
      this->a = 0.0;
      this->b = 0.0;
      this->c = 0.0;
      this->x_min_m = 0.0;
      this->x_max_m = 0.0;
      this->fit_error_m = 0.0;
      this->num_points = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _valid_type =
    bool;
  _valid_type valid;
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;
  using _c_type =
    double;
  _c_type c;
  using _x_min_m_type =
    double;
  _x_min_m_type x_min_m;
  using _x_max_m_type =
    double;
  _x_max_m_type x_max_m;
  using _fit_error_m_type =
    double;
  _fit_error_m_type fit_error_m;
  using _num_points_type =
    int32_t;
  _num_points_type num_points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const double & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__x_min_m(
    const double & _arg)
  {
    this->x_min_m = _arg;
    return *this;
  }
  Type & set__x_max_m(
    const double & _arg)
  {
    this->x_max_m = _arg;
    return *this;
  }
  Type & set__fit_error_m(
    const double & _arg)
  {
    this->fit_error_m = _arg;
    return *this;
  }
  Type & set__num_points(
    const int32_t & _arg)
  {
    this->num_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__LaneTrajectory
    std::shared_ptr<interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__LaneTrajectory
    std::shared_ptr<interfaces_pkg::msg::LaneTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->x_min_m != other.x_min_m) {
      return false;
    }
    if (this->x_max_m != other.x_max_m) {
      return false;
    }
    if (this->fit_error_m != other.fit_error_m) {
      return false;
    }
    if (this->num_points != other.num_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneTrajectory_

// alias to use template instance with default allocator
using LaneTrajectory =
  interfaces_pkg::msg::LaneTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__LANE_TRAJECTORY__STRUCT_HPP_
