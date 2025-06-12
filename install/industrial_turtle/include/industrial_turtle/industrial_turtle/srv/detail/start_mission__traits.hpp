// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from industrial_turtle:srv/StartMission.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__TRAITS_HPP_
#define INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "industrial_turtle/srv/detail/start_mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace industrial_turtle
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartMission_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: mission_type
  {
    out << "mission_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_type, out);
    out << ", ";
  }

  // member: target_x
  {
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << ", ";
  }

  // member: target_y
  {
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartMission_Request & msg,
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

  // member: mission_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_type, out);
    out << "\n";
  }

  // member: target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_x, out);
    out << "\n";
  }

  // member: target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_y, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartMission_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace industrial_turtle

namespace rosidl_generator_traits
{

[[deprecated("use industrial_turtle::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const industrial_turtle::srv::StartMission_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_turtle::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_turtle::srv::to_yaml() instead")]]
inline std::string to_yaml(const industrial_turtle::srv::StartMission_Request & msg)
{
  return industrial_turtle::srv::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_turtle::srv::StartMission_Request>()
{
  return "industrial_turtle::srv::StartMission_Request";
}

template<>
inline const char * name<industrial_turtle::srv::StartMission_Request>()
{
  return "industrial_turtle/srv/StartMission_Request";
}

template<>
struct has_fixed_size<industrial_turtle::srv::StartMission_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<industrial_turtle::srv::StartMission_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<industrial_turtle::srv::StartMission_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace industrial_turtle
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartMission_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: estimated_time
  {
    out << "estimated_time: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartMission_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: estimated_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_time: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartMission_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace industrial_turtle

namespace rosidl_generator_traits
{

[[deprecated("use industrial_turtle::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const industrial_turtle::srv::StartMission_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_turtle::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_turtle::srv::to_yaml() instead")]]
inline std::string to_yaml(const industrial_turtle::srv::StartMission_Response & msg)
{
  return industrial_turtle::srv::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_turtle::srv::StartMission_Response>()
{
  return "industrial_turtle::srv::StartMission_Response";
}

template<>
inline const char * name<industrial_turtle::srv::StartMission_Response>()
{
  return "industrial_turtle/srv/StartMission_Response";
}

template<>
struct has_fixed_size<industrial_turtle::srv::StartMission_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<industrial_turtle::srv::StartMission_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<industrial_turtle::srv::StartMission_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<industrial_turtle::srv::StartMission>()
{
  return "industrial_turtle::srv::StartMission";
}

template<>
inline const char * name<industrial_turtle::srv::StartMission>()
{
  return "industrial_turtle/srv/StartMission";
}

template<>
struct has_fixed_size<industrial_turtle::srv::StartMission>
  : std::integral_constant<
    bool,
    has_fixed_size<industrial_turtle::srv::StartMission_Request>::value &&
    has_fixed_size<industrial_turtle::srv::StartMission_Response>::value
  >
{
};

template<>
struct has_bounded_size<industrial_turtle::srv::StartMission>
  : std::integral_constant<
    bool,
    has_bounded_size<industrial_turtle::srv::StartMission_Request>::value &&
    has_bounded_size<industrial_turtle::srv::StartMission_Response>::value
  >
{
};

template<>
struct is_service<industrial_turtle::srv::StartMission>
  : std::true_type
{
};

template<>
struct is_service_request<industrial_turtle::srv::StartMission_Request>
  : std::true_type
{
};

template<>
struct is_service_response<industrial_turtle::srv::StartMission_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__TRAITS_HPP_
