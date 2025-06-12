// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from industrial_turtle:srv/StartMission.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__BUILDER_HPP_
#define INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "industrial_turtle/srv/detail/start_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace industrial_turtle
{

namespace srv
{

namespace builder
{

class Init_StartMission_Request_priority
{
public:
  explicit Init_StartMission_Request_priority(::industrial_turtle::srv::StartMission_Request & msg)
  : msg_(msg)
  {}
  ::industrial_turtle::srv::StartMission_Request priority(::industrial_turtle::srv::StartMission_Request::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_turtle::srv::StartMission_Request msg_;
};

class Init_StartMission_Request_target_y
{
public:
  explicit Init_StartMission_Request_target_y(::industrial_turtle::srv::StartMission_Request & msg)
  : msg_(msg)
  {}
  Init_StartMission_Request_priority target_y(::industrial_turtle::srv::StartMission_Request::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_StartMission_Request_priority(msg_);
  }

private:
  ::industrial_turtle::srv::StartMission_Request msg_;
};

class Init_StartMission_Request_target_x
{
public:
  explicit Init_StartMission_Request_target_x(::industrial_turtle::srv::StartMission_Request & msg)
  : msg_(msg)
  {}
  Init_StartMission_Request_target_y target_x(::industrial_turtle::srv::StartMission_Request::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_StartMission_Request_target_y(msg_);
  }

private:
  ::industrial_turtle::srv::StartMission_Request msg_;
};

class Init_StartMission_Request_mission_type
{
public:
  explicit Init_StartMission_Request_mission_type(::industrial_turtle::srv::StartMission_Request & msg)
  : msg_(msg)
  {}
  Init_StartMission_Request_target_x mission_type(::industrial_turtle::srv::StartMission_Request::_mission_type_type arg)
  {
    msg_.mission_type = std::move(arg);
    return Init_StartMission_Request_target_x(msg_);
  }

private:
  ::industrial_turtle::srv::StartMission_Request msg_;
};

class Init_StartMission_Request_robot_id
{
public:
  Init_StartMission_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartMission_Request_mission_type robot_id(::industrial_turtle::srv::StartMission_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_StartMission_Request_mission_type(msg_);
  }

private:
  ::industrial_turtle::srv::StartMission_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_turtle::srv::StartMission_Request>()
{
  return industrial_turtle::srv::builder::Init_StartMission_Request_robot_id();
}

}  // namespace industrial_turtle


namespace industrial_turtle
{

namespace srv
{

namespace builder
{

class Init_StartMission_Response_estimated_time
{
public:
  explicit Init_StartMission_Response_estimated_time(::industrial_turtle::srv::StartMission_Response & msg)
  : msg_(msg)
  {}
  ::industrial_turtle::srv::StartMission_Response estimated_time(::industrial_turtle::srv::StartMission_Response::_estimated_time_type arg)
  {
    msg_.estimated_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_turtle::srv::StartMission_Response msg_;
};

class Init_StartMission_Response_message
{
public:
  explicit Init_StartMission_Response_message(::industrial_turtle::srv::StartMission_Response & msg)
  : msg_(msg)
  {}
  Init_StartMission_Response_estimated_time message(::industrial_turtle::srv::StartMission_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_StartMission_Response_estimated_time(msg_);
  }

private:
  ::industrial_turtle::srv::StartMission_Response msg_;
};

class Init_StartMission_Response_success
{
public:
  Init_StartMission_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartMission_Response_message success(::industrial_turtle::srv::StartMission_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StartMission_Response_message(msg_);
  }

private:
  ::industrial_turtle::srv::StartMission_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_turtle::srv::StartMission_Response>()
{
  return industrial_turtle::srv::builder::Init_StartMission_Response_success();
}

}  // namespace industrial_turtle

#endif  // INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__BUILDER_HPP_
