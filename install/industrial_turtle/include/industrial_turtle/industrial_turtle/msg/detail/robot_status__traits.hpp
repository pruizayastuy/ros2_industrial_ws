// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from industrial_turtle:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "industrial_turtle/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace industrial_turtle
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: position_x
  {
    out << "position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.position_x, out);
    out << ", ";
  }

  // member: position_y
  {
    out << "position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.position_y, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: current_task
  {
    out << "current_task: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task, out);
    out << ", ";
  }

  // member: is_moving
  {
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: completed_tasks
  {
    out << "completed_tasks: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_tasks, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.position_x, out);
    out << "\n";
  }

  // member: position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.position_y, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: current_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_task: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task, out);
    out << "\n";
  }

  // member: is_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: completed_tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completed_tasks: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_tasks, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace industrial_turtle

namespace rosidl_generator_traits
{

[[deprecated("use industrial_turtle::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const industrial_turtle::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_turtle::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_turtle::msg::to_yaml() instead")]]
inline std::string to_yaml(const industrial_turtle::msg::RobotStatus & msg)
{
  return industrial_turtle::msg::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_turtle::msg::RobotStatus>()
{
  return "industrial_turtle::msg::RobotStatus";
}

template<>
inline const char * name<industrial_turtle::msg::RobotStatus>()
{
  return "industrial_turtle/msg/RobotStatus";
}

template<>
struct has_fixed_size<industrial_turtle::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<industrial_turtle::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<industrial_turtle::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
