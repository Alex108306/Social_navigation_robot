// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leg_detector_msgs:msg/Human.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__BUILDER_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leg_detector_msgs/msg/detail/human__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leg_detector_msgs
{

namespace msg
{

namespace builder
{

class Init_Human_id
{
public:
  explicit Init_Human_id(::leg_detector_msgs::msg::Human & msg)
  : msg_(msg)
  {}
  ::leg_detector_msgs::msg::Human id(::leg_detector_msgs::msg::Human::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leg_detector_msgs::msg::Human msg_;
};

class Init_Human_pose
{
public:
  Init_Human_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Human_id pose(::leg_detector_msgs::msg::Human::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Human_id(msg_);
  }

private:
  ::leg_detector_msgs::msg::Human msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leg_detector_msgs::msg::Human>()
{
  return leg_detector_msgs::msg::builder::Init_Human_pose();
}

}  // namespace leg_detector_msgs

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__BUILDER_HPP_
