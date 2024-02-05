// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leg_detector_msgs:msg/Human.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__STRUCT_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leg_detector_msgs__msg__Human __attribute__((deprecated))
#else
# define DEPRECATED__leg_detector_msgs__msg__Human __declspec(deprecated)
#endif

namespace leg_detector_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Human_
{
  using Type = Human_<ContainerAllocator>;

  explicit Human_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  explicit Human_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _id_type =
    uint32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leg_detector_msgs::msg::Human_<ContainerAllocator> *;
  using ConstRawPtr =
    const leg_detector_msgs::msg::Human_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leg_detector_msgs::msg::Human_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leg_detector_msgs::msg::Human_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leg_detector_msgs::msg::Human_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leg_detector_msgs::msg::Human_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leg_detector_msgs::msg::Human_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leg_detector_msgs::msg::Human_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leg_detector_msgs::msg::Human_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leg_detector_msgs::msg::Human_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leg_detector_msgs__msg__Human
    std::shared_ptr<leg_detector_msgs::msg::Human_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leg_detector_msgs__msg__Human
    std::shared_ptr<leg_detector_msgs::msg::Human_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Human_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Human_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Human_

// alias to use template instance with default allocator
using Human =
  leg_detector_msgs::msg::Human_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__STRUCT_HPP_