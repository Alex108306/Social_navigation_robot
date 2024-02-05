// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leg_detector_msgs:msg/Leg.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__TRAITS_HPP_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leg_detector_msgs/msg/detail/leg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace leg_detector_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Leg & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Leg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Leg & msg, bool use_flow_style = false)
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

}  // namespace leg_detector_msgs

namespace rosidl_generator_traits
{

[[deprecated("use leg_detector_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leg_detector_msgs::msg::Leg & msg,
  std::ostream & out, size_t indentation = 0)
{
  leg_detector_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leg_detector_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const leg_detector_msgs::msg::Leg & msg)
{
  return leg_detector_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leg_detector_msgs::msg::Leg>()
{
  return "leg_detector_msgs::msg::Leg";
}

template<>
inline const char * name<leg_detector_msgs::msg::Leg>()
{
  return "leg_detector_msgs/msg/Leg";
}

template<>
struct has_fixed_size<leg_detector_msgs::msg::Leg>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<leg_detector_msgs::msg::Leg>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<leg_detector_msgs::msg::Leg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__LEG__TRAITS_HPP_
