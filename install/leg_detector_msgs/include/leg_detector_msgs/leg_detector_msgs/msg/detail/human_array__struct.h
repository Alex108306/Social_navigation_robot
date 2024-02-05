// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leg_detector_msgs:msg/HumanArray.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN_ARRAY__STRUCT_H_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN_ARRAY__STRUCT_H_

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
// Member 'people'
#include "leg_detector_msgs/msg/detail/human__struct.h"

/// Struct defined in msg/HumanArray in the package leg_detector_msgs.
typedef struct leg_detector_msgs__msg__HumanArray
{
  std_msgs__msg__Header header;
  leg_detector_msgs__msg__Human__Sequence people;
} leg_detector_msgs__msg__HumanArray;

// Struct for a sequence of leg_detector_msgs__msg__HumanArray.
typedef struct leg_detector_msgs__msg__HumanArray__Sequence
{
  leg_detector_msgs__msg__HumanArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leg_detector_msgs__msg__HumanArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN_ARRAY__STRUCT_H_
