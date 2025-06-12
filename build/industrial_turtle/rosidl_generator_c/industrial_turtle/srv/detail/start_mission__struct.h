// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from industrial_turtle:srv/StartMission.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__STRUCT_H_
#define INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__STRUCT_H_

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
// Member 'mission_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StartMission in the package industrial_turtle.
typedef struct industrial_turtle__srv__StartMission_Request
{
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String mission_type;
  double target_x;
  double target_y;
  int32_t priority;
} industrial_turtle__srv__StartMission_Request;

// Struct for a sequence of industrial_turtle__srv__StartMission_Request.
typedef struct industrial_turtle__srv__StartMission_Request__Sequence
{
  industrial_turtle__srv__StartMission_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_turtle__srv__StartMission_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StartMission in the package industrial_turtle.
typedef struct industrial_turtle__srv__StartMission_Response
{
  bool success;
  rosidl_runtime_c__String message;
  double estimated_time;
} industrial_turtle__srv__StartMission_Response;

// Struct for a sequence of industrial_turtle__srv__StartMission_Response.
typedef struct industrial_turtle__srv__StartMission_Response__Sequence
{
  industrial_turtle__srv__StartMission_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_turtle__srv__StartMission_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__STRUCT_H_
