// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leg_detector_msgs:msg/Human.idl
// generated code does not contain a copyright notice
#include "leg_detector_msgs/msg/detail/human__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
leg_detector_msgs__msg__Human__init(leg_detector_msgs__msg__Human * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    leg_detector_msgs__msg__Human__fini(msg);
    return false;
  }
  // id
  return true;
}

void
leg_detector_msgs__msg__Human__fini(leg_detector_msgs__msg__Human * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // id
}

bool
leg_detector_msgs__msg__Human__are_equal(const leg_detector_msgs__msg__Human * lhs, const leg_detector_msgs__msg__Human * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
leg_detector_msgs__msg__Human__copy(
  const leg_detector_msgs__msg__Human * input,
  leg_detector_msgs__msg__Human * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

leg_detector_msgs__msg__Human *
leg_detector_msgs__msg__Human__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leg_detector_msgs__msg__Human * msg = (leg_detector_msgs__msg__Human *)allocator.allocate(sizeof(leg_detector_msgs__msg__Human), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leg_detector_msgs__msg__Human));
  bool success = leg_detector_msgs__msg__Human__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leg_detector_msgs__msg__Human__destroy(leg_detector_msgs__msg__Human * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leg_detector_msgs__msg__Human__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leg_detector_msgs__msg__Human__Sequence__init(leg_detector_msgs__msg__Human__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leg_detector_msgs__msg__Human * data = NULL;

  if (size) {
    data = (leg_detector_msgs__msg__Human *)allocator.zero_allocate(size, sizeof(leg_detector_msgs__msg__Human), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leg_detector_msgs__msg__Human__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leg_detector_msgs__msg__Human__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
leg_detector_msgs__msg__Human__Sequence__fini(leg_detector_msgs__msg__Human__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      leg_detector_msgs__msg__Human__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

leg_detector_msgs__msg__Human__Sequence *
leg_detector_msgs__msg__Human__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leg_detector_msgs__msg__Human__Sequence * array = (leg_detector_msgs__msg__Human__Sequence *)allocator.allocate(sizeof(leg_detector_msgs__msg__Human__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leg_detector_msgs__msg__Human__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leg_detector_msgs__msg__Human__Sequence__destroy(leg_detector_msgs__msg__Human__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leg_detector_msgs__msg__Human__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leg_detector_msgs__msg__Human__Sequence__are_equal(const leg_detector_msgs__msg__Human__Sequence * lhs, const leg_detector_msgs__msg__Human__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leg_detector_msgs__msg__Human__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leg_detector_msgs__msg__Human__Sequence__copy(
  const leg_detector_msgs__msg__Human__Sequence * input,
  leg_detector_msgs__msg__Human__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leg_detector_msgs__msg__Human);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leg_detector_msgs__msg__Human * data =
      (leg_detector_msgs__msg__Human *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leg_detector_msgs__msg__Human__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leg_detector_msgs__msg__Human__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leg_detector_msgs__msg__Human__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
