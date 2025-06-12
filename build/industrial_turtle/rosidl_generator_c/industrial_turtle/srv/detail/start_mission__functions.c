// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from industrial_turtle:srv/StartMission.idl
// generated code does not contain a copyright notice
#include "industrial_turtle/srv/detail/start_mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_id`
// Member `mission_type`
#include "rosidl_runtime_c/string_functions.h"

bool
industrial_turtle__srv__StartMission_Request__init(industrial_turtle__srv__StartMission_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    industrial_turtle__srv__StartMission_Request__fini(msg);
    return false;
  }
  // mission_type
  if (!rosidl_runtime_c__String__init(&msg->mission_type)) {
    industrial_turtle__srv__StartMission_Request__fini(msg);
    return false;
  }
  // target_x
  // target_y
  // priority
  return true;
}

void
industrial_turtle__srv__StartMission_Request__fini(industrial_turtle__srv__StartMission_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // mission_type
  rosidl_runtime_c__String__fini(&msg->mission_type);
  // target_x
  // target_y
  // priority
}

bool
industrial_turtle__srv__StartMission_Request__are_equal(const industrial_turtle__srv__StartMission_Request * lhs, const industrial_turtle__srv__StartMission_Request * rhs)
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
  // mission_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_type), &(rhs->mission_type)))
  {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  return true;
}

bool
industrial_turtle__srv__StartMission_Request__copy(
  const industrial_turtle__srv__StartMission_Request * input,
  industrial_turtle__srv__StartMission_Request * output)
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
  // mission_type
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_type), &(output->mission_type)))
  {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // priority
  output->priority = input->priority;
  return true;
}

industrial_turtle__srv__StartMission_Request *
industrial_turtle__srv__StartMission_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__srv__StartMission_Request * msg = (industrial_turtle__srv__StartMission_Request *)allocator.allocate(sizeof(industrial_turtle__srv__StartMission_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_turtle__srv__StartMission_Request));
  bool success = industrial_turtle__srv__StartMission_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_turtle__srv__StartMission_Request__destroy(industrial_turtle__srv__StartMission_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_turtle__srv__StartMission_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_turtle__srv__StartMission_Request__Sequence__init(industrial_turtle__srv__StartMission_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__srv__StartMission_Request * data = NULL;

  if (size) {
    data = (industrial_turtle__srv__StartMission_Request *)allocator.zero_allocate(size, sizeof(industrial_turtle__srv__StartMission_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_turtle__srv__StartMission_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_turtle__srv__StartMission_Request__fini(&data[i - 1]);
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
industrial_turtle__srv__StartMission_Request__Sequence__fini(industrial_turtle__srv__StartMission_Request__Sequence * array)
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
      industrial_turtle__srv__StartMission_Request__fini(&array->data[i]);
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

industrial_turtle__srv__StartMission_Request__Sequence *
industrial_turtle__srv__StartMission_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__srv__StartMission_Request__Sequence * array = (industrial_turtle__srv__StartMission_Request__Sequence *)allocator.allocate(sizeof(industrial_turtle__srv__StartMission_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_turtle__srv__StartMission_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_turtle__srv__StartMission_Request__Sequence__destroy(industrial_turtle__srv__StartMission_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_turtle__srv__StartMission_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_turtle__srv__StartMission_Request__Sequence__are_equal(const industrial_turtle__srv__StartMission_Request__Sequence * lhs, const industrial_turtle__srv__StartMission_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_turtle__srv__StartMission_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_turtle__srv__StartMission_Request__Sequence__copy(
  const industrial_turtle__srv__StartMission_Request__Sequence * input,
  industrial_turtle__srv__StartMission_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_turtle__srv__StartMission_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_turtle__srv__StartMission_Request * data =
      (industrial_turtle__srv__StartMission_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_turtle__srv__StartMission_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_turtle__srv__StartMission_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_turtle__srv__StartMission_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
industrial_turtle__srv__StartMission_Response__init(industrial_turtle__srv__StartMission_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    industrial_turtle__srv__StartMission_Response__fini(msg);
    return false;
  }
  // estimated_time
  return true;
}

void
industrial_turtle__srv__StartMission_Response__fini(industrial_turtle__srv__StartMission_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // estimated_time
}

bool
industrial_turtle__srv__StartMission_Response__are_equal(const industrial_turtle__srv__StartMission_Response * lhs, const industrial_turtle__srv__StartMission_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // estimated_time
  if (lhs->estimated_time != rhs->estimated_time) {
    return false;
  }
  return true;
}

bool
industrial_turtle__srv__StartMission_Response__copy(
  const industrial_turtle__srv__StartMission_Response * input,
  industrial_turtle__srv__StartMission_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // estimated_time
  output->estimated_time = input->estimated_time;
  return true;
}

industrial_turtle__srv__StartMission_Response *
industrial_turtle__srv__StartMission_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__srv__StartMission_Response * msg = (industrial_turtle__srv__StartMission_Response *)allocator.allocate(sizeof(industrial_turtle__srv__StartMission_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_turtle__srv__StartMission_Response));
  bool success = industrial_turtle__srv__StartMission_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_turtle__srv__StartMission_Response__destroy(industrial_turtle__srv__StartMission_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_turtle__srv__StartMission_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_turtle__srv__StartMission_Response__Sequence__init(industrial_turtle__srv__StartMission_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__srv__StartMission_Response * data = NULL;

  if (size) {
    data = (industrial_turtle__srv__StartMission_Response *)allocator.zero_allocate(size, sizeof(industrial_turtle__srv__StartMission_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_turtle__srv__StartMission_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_turtle__srv__StartMission_Response__fini(&data[i - 1]);
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
industrial_turtle__srv__StartMission_Response__Sequence__fini(industrial_turtle__srv__StartMission_Response__Sequence * array)
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
      industrial_turtle__srv__StartMission_Response__fini(&array->data[i]);
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

industrial_turtle__srv__StartMission_Response__Sequence *
industrial_turtle__srv__StartMission_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_turtle__srv__StartMission_Response__Sequence * array = (industrial_turtle__srv__StartMission_Response__Sequence *)allocator.allocate(sizeof(industrial_turtle__srv__StartMission_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_turtle__srv__StartMission_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_turtle__srv__StartMission_Response__Sequence__destroy(industrial_turtle__srv__StartMission_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_turtle__srv__StartMission_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_turtle__srv__StartMission_Response__Sequence__are_equal(const industrial_turtle__srv__StartMission_Response__Sequence * lhs, const industrial_turtle__srv__StartMission_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_turtle__srv__StartMission_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_turtle__srv__StartMission_Response__Sequence__copy(
  const industrial_turtle__srv__StartMission_Response__Sequence * input,
  industrial_turtle__srv__StartMission_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_turtle__srv__StartMission_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_turtle__srv__StartMission_Response * data =
      (industrial_turtle__srv__StartMission_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_turtle__srv__StartMission_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_turtle__srv__StartMission_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_turtle__srv__StartMission_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
