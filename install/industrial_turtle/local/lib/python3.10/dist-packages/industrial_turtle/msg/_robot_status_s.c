// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from industrial_turtle:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "industrial_turtle/msg/detail/robot_status__struct.h"
#include "industrial_turtle/msg/detail/robot_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool industrial_turtle__msg__robot_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("industrial_turtle.msg._robot_status.RobotStatus", full_classname_dest, 47) == 0);
  }
  industrial_turtle__msg__RobotStatus * ros_message = _ros_message;
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_level = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_task");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->current_task, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_moving");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_moving = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // completed_tasks
    PyObject * field = PyObject_GetAttrString(_pymsg, "completed_tasks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->completed_tasks = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * industrial_turtle__msg__robot_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("industrial_turtle.msg._robot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  industrial_turtle__msg__RobotStatus * ros_message = (industrial_turtle__msg__RobotStatus *)raw_ros_message;
  {  // robot_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_id.data,
      strlen(ros_message->robot_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_task
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->current_task.data,
      strlen(ros_message->current_task.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_moving
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_moving ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // completed_tasks
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->completed_tasks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "completed_tasks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
