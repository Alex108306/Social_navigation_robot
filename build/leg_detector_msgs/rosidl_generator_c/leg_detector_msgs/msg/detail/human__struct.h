// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leg_detector_msgs:msg/Human.idl
// generated code does not contain a copyright notice

#ifndef LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__STRUCT_H_
#define LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Human in the package leg_detector_msgs.
typedef struct leg_detector_msgs__msg__Human
{
  geometry_msgs__msg__Pose pose;
  uint32_t id;
} leg_detector_msgs__msg__Human;

// Struct for a sequence of leg_detector_msgs__msg__Human.
typedef struct leg_detector_msgs__msg__Human__Sequence
{
  leg_detector_msgs__msg__Human * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leg_detector_msgs__msg__Human__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEG_DETECTOR_MSGS__MSG__DETAIL__HUMAN__STRUCT_H_
