// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from industrial_turtle:srv/StartMission.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "industrial_turtle/srv/detail/start_mission__rosidl_typesupport_introspection_c.h"
#include "industrial_turtle/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "industrial_turtle/srv/detail/start_mission__functions.h"
#include "industrial_turtle/srv/detail/start_mission__struct.h"


// Include directives for member types
// Member `robot_id`
// Member `mission_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  industrial_turtle__srv__StartMission_Request__init(message_memory);
}

void industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_fini_function(void * message_memory)
{
  industrial_turtle__srv__StartMission_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_message_member_array[5] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_turtle__srv__StartMission_Request, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_turtle__srv__StartMission_Request, mission_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_turtle__srv__StartMission_Request, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_turtle__srv__StartMission_Request, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_turtle__srv__StartMission_Request, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_message_members = {
  "industrial_turtle__srv",  // message namespace
  "StartMission_Request",  // message name
  5,  // number of fields
  sizeof(industrial_turtle__srv__StartMission_Request),
  industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_message_member_array,  // message members
  industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_message_type_support_handle = {
  0,
  &industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_industrial_turtle
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_turtle, srv, StartMission_Request)() {
  if (!industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_message_type_support_handle.typesupport_identifier) {
    industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &industrial_turtle__srv__StartMission_Request__rosidl_typesupport_introspection_c__StartMission_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "industrial_turtle/srv/detail/start_mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "industrial_turtle/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "industrial_turtle/srv/detail/start_mission__functions.h"
// already included above
// #include "industrial_turtle/srv/detail/start_mission__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  industrial_turtle__srv__StartMission_Response__init(message_memory);
}

void industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_fini_function(void * message_memory)
{
  industrial_turtle__srv__StartMission_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_turtle__srv__StartMission_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_turtle__srv__StartMission_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_turtle__srv__StartMission_Response, estimated_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_message_members = {
  "industrial_turtle__srv",  // message namespace
  "StartMission_Response",  // message name
  3,  // number of fields
  sizeof(industrial_turtle__srv__StartMission_Response),
  industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_message_member_array,  // message members
  industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_message_type_support_handle = {
  0,
  &industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_industrial_turtle
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_turtle, srv, StartMission_Response)() {
  if (!industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_message_type_support_handle.typesupport_identifier) {
    industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &industrial_turtle__srv__StartMission_Response__rosidl_typesupport_introspection_c__StartMission_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "industrial_turtle/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "industrial_turtle/srv/detail/start_mission__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_service_members = {
  "industrial_turtle__srv",  // service namespace
  "StartMission",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_Request_message_type_support_handle,
  NULL  // response message
  // industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_Response_message_type_support_handle
};

static rosidl_service_type_support_t industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_service_type_support_handle = {
  0,
  &industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_turtle, srv, StartMission_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_turtle, srv, StartMission_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_industrial_turtle
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_turtle, srv, StartMission)() {
  if (!industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_service_type_support_handle.typesupport_identifier) {
    industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_turtle, srv, StartMission_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_turtle, srv, StartMission_Response)()->data;
  }

  return &industrial_turtle__srv__detail__start_mission__rosidl_typesupport_introspection_c__StartMission_service_type_support_handle;
}
