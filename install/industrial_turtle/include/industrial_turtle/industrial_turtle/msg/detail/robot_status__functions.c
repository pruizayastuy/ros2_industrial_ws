// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from industrial_turtle:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "industrial_turtle/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_id`
// Member `current_task`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
industrial_turtle__msg__RobotStatus__init(industrial_turtle__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    industrial_turtle__msg__RobotStatus__fini(msg);
    return false;
  }
  // position_x
  // position_y
  // battery_level
  // current_task
  if (!rosidl_runtime_c__String__init(&msg->current_task)) {
    industrial_turtle__msg__RobotStatus__fini(msg);
    return false;
  }
  // is_moving
  // speed
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    industrial_turtle__msg__RobotStatus__fini(msg);
    return false;
  }
  // completed_tasks
  return true;
}

void
industrial_turtle__msg__RobotStatus__fini(industrial_turtle__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // position_x
  // position_y
  // battery_level
  // current_task
  rosidl_runtime_c__String__fini(&msg->current_task);
  // is_moving
  // speed
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // completed_tasks
}

bool
industrial_turtle__msg__RobotStatus__are_equal(const industrial_turtle__msg__RobotStatus * lhs, const industrial_turtle__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // position_x
  if (lhs->position_x != rhs->position_x) {
    return false;
  }
  // position_y
  if (lhs->position_y != rhs->position_y) {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // current_task
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_task), &(rhs->current_task)))
  {
    return false;
  }
  // is_moving
  if (lhs->is_moving != rhs->is_moving) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // completed_tasks
  if (lhs->completed_tasks != rhs->completed_tasks) {
    return false;
  }
  return true;
}

bool
industrial_turtle__msg__RobotStatus__copy(
  const industrial_turtle__msg__RobotStatus * input,
  industrial_turtle__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // position_x
  output->position_x = input->position_x;
  // position_y
  output->position_y = input->position_y;
  // battery_level
  output->battery_level = input->battery_level;
  // current_task
  if (!rosidl_runtime_c__String__copy(
      &(input->current_task), &(output->current_task)))
  {
    return false;
  }
  // is_moving
  output->is_moving = input->is_moving;
  // speed
  output->speed = input->speed;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // completed_tasks
  output->completed_tasks = input->completed_tasks;
  return true;
}

industrial_turtle__msg__RobotStatus *
industrial_turtle__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__msg__RobotStatus * msg = (industrial_turtle__msg__RobotStatus *)allocator.allocate(sizeof(industrial_turtle__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_turtle__msg__RobotStatus));
  bool success = industrial_turtle__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_turtle__msg__RobotStatus__destroy(industrial_turtle__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_turtle__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_turtle__msg__RobotStatus__Sequence__init(industrial_turtle__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__msg__RobotStatus * data = NULL;

  if (size) {
    data = (industrial_turtle__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(industrial_turtle__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_turtle__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_turtle__msg__RobotStatus__fini(&data[i - 1]);
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
industrial_turtle__msg__RobotStatus__Sequence__fini(industrial_turtle__msg__RobotStatus__Sequence * array)
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
      industrial_turtle__msg__RobotStatus__fini(&array->data[i]);
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

industrial_turtle__msg__RobotStatus__Sequence *
industrial_turtle__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__msg__RobotStatus__Sequence * array = (industrial_turtle__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(industrial_turtle__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_turtle__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_turtle__msg__RobotStatus__Sequence__destroy(industrial_turtle__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_turtle__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_turtle__msg__RobotStatus__Sequence__are_equal(const industrial_turtle__msg__RobotStatus__Sequence * lhs, const industrial_turtle__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_turtle__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_turtle__msg__RobotStatus__Sequence__copy(
  const industrial_turtle__msg__RobotStatus__Sequence * input,
  industrial_turtle__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_turtle__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_turtle__msg__RobotStatus * data =
      (industrial_turtle__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_turtle__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_turtle__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_turtle__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
