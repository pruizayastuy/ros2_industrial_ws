// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from industrial_turtle:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_id'
// Member 'current_task'
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotStatus in the package industrial_turtle.
typedef struct industrial_turtle__msg__RobotStatus
{
  rosidl_runtime_c__String robot_id;
  double position_x;
  double position_y;
  double battery_level;
  rosidl_runtime_c__String current_task;
  bool is_moving;
  double speed;
  rosidl_runtime_c__String status;
  int32_t completed_tasks;
} industrial_turtle__msg__RobotStatus;

// Struct for a sequence of industrial_turtle__msg__RobotStatus.
typedef struct industrial_turtle__msg__RobotStatus__Sequence
{
  industrial_turtle__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_turtle__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
