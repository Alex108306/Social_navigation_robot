// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leg_detector_msgs:msg/HumanArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN_ARRAY__BUILDER_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leg_detector_msgs/msg/detail/human_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leg_detector_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanArray_people
{
public:
  explicit Init_HumanArray_people(::leg_detector_msgs::msg::HumanArray & msg)
  : msg_(msg)
  {}
  ::leg_detector_msgs::msg::HumanArray people(::leg_detector_msgs::msg::HumanArray::_people_type arg)
  {
    msg_.people = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leg_detector_msgs::msg::HumanArray msg_;
};

class Init_HumanArray_header
{
public:
  Init_HumanArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanArray_people header(::leg_detector_msgs::msg::HumanArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanArray_people(msg_);
  }

private:
  ::leg_detector_msgs::msg::HumanArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leg_detector_msgs::msg::HumanArray>()
{
  return leg_detector_msgs::msg::builder::Init_HumanArray_header();
}

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN_ARRAY__BUILDER_HPP_
