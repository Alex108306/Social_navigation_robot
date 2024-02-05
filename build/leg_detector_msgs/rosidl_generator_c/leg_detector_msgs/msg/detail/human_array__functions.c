// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leg_detector_msgs:msg/HumanArray.idl
// generated code does not contain a copyright notice
#include "leg_detector_msgs/msg/detail/human_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `people`
#include "leg_detector_msgs/msg/detail/human__functions.h"

bool
leg_detector_msgs__msg__HumanArray__init(leg_detector_msgs__msg__HumanArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    leg_detector_msgs__msg__HumanArray__fini(msg);
    return false;
  }
  // people
  if (!leg_detector_msgs__msg__Human__Sequence__init(&msg->people, 0)) {
    leg_detector_msgs__msg__HumanArray__fini(msg);
    return false;
  }
  return true;
}

void
leg_detector_msgs__msg__HumanArray__fini(leg_detector_msgs__msg__HumanArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // people
  leg_detector_msgs__msg__Human__Sequence__fini(&msg->people);
}

bool
leg_detector_msgs__msg__HumanArray__are_equal(const leg_detector_msgs__msg__HumanArray * lhs, const leg_detector_msgs__msg__HumanArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // people
  if (!leg_detector_msgs__msg__Human__Sequence__are_equal(
      &(lhs->people), &(rhs->people)))
  {
    return false;
  }
  return true;
}

bool
leg_detector_msgs__msg__HumanArray__copy(
  const leg_detector_msgs__msg__HumanArray * input,
  leg_detector_msgs__msg__HumanArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // people
  if (!leg_detector_msgs__msg__Human__Sequence__copy(
      &(input->people), &(output->people)))
  {
    return false;
  }
  return true;
}

leg_detector_msgs__msg__HumanArray *
leg_detector_msgs__msg__HumanArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leg_detector_msgs__msg__HumanArray * msg = (leg_detector_msgs__msg__HumanArray *)allocator.allocate(sizeof(leg_detector_msgs__msg__HumanArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leg_detector_msgs__msg__HumanArray));
  bool success = leg_detector_msgs__msg__HumanArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leg_detector_msgs__msg__HumanArray__destroy(leg_detector_msgs__msg__HumanArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leg_detector_msgs__msg__HumanArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leg_detector_msgs__msg__HumanArray__Sequence__init(leg_detector_msgs__msg__HumanArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leg_detector_msgs__msg__HumanArray * data = NULL;

  if (size) {
    data = (leg_detector_msgs__msg__HumanArray *)allocator.zero_allocate(size, sizeof(leg_detector_msgs__msg__HumanArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leg_detector_msgs__msg__HumanArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leg_detector_msgs__msg__HumanArray__fini(&data[i - 1]);
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
leg_detector_msgs__msg__HumanArray__Sequence__fini(leg_detector_msgs__msg__HumanArray__Sequence * array)
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
      leg_detector_msgs__msg__HumanArray__fini(&array->data[i]);
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

leg_detector_msgs__msg__HumanArray__Sequence *
leg_detector_msgs__msg__HumanArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leg_detector_msgs__msg__HumanArray__Sequence * array = (leg_detector_msgs__msg__HumanArray__Sequence *)allocator.allocate(sizeof(leg_detector_msgs__msg__HumanArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leg_detector_msgs__msg__HumanArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leg_detector_msgs__msg__HumanArray__Sequence__destroy(leg_detector_msgs__msg__HumanArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leg_detector_msgs__msg__HumanArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leg_detector_msgs__msg__HumanArray__Sequence__are_equal(const leg_detector_msgs__msg__HumanArray__Sequence * lhs, const leg_detector_msgs__msg__HumanArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leg_detector_msgs__msg__HumanArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leg_detector_msgs__msg__HumanArray__Sequence__copy(
  const leg_detector_msgs__msg__HumanArray__Sequence * input,
  leg_detector_msgs__msg__HumanArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leg_detector_msgs__msg__HumanArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leg_detector_msgs__msg__HumanArray * data =
      (leg_detector_msgs__msg__HumanArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leg_detector_msgs__msg__HumanArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leg_detector_msgs__msg__HumanArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leg_detector_msgs__msg__HumanArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
