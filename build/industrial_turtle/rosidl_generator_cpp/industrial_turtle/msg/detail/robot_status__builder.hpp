// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from industrial_turtle:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "industrial_turtle/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace industrial_turtle
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_completed_tasks
{
public:
  explicit Init_RobotStatus_completed_tasks(::industrial_turtle::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::industrial_turtle::msg::RobotStatus completed_tasks(::industrial_turtle::msg::RobotStatus::_completed_tasks_type arg)
  {
    msg_.completed_tasks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

class Init_RobotStatus_status
{
public:
  explicit Init_RobotStatus_status(::industrial_turtle::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_completed_tasks status(::industrial_turtle::msg::RobotStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotStatus_completed_tasks(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

class Init_RobotStatus_speed
{
public:
  explicit Init_RobotStatus_speed(::industrial_turtle::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_status speed(::industrial_turtle::msg::RobotStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RobotStatus_status(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

class Init_RobotStatus_is_moving
{
public:
  explicit Init_RobotStatus_is_moving(::industrial_turtle::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_speed is_moving(::industrial_turtle::msg::RobotStatus::_is_moving_type arg)
  {
    msg_.is_moving = std::move(arg);
    return Init_RobotStatus_speed(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

class Init_RobotStatus_current_task
{
public:
  explicit Init_RobotStatus_current_task(::industrial_turtle::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_is_moving current_task(::industrial_turtle::msg::RobotStatus::_current_task_type arg)
  {
    msg_.current_task = std::move(arg);
    return Init_RobotStatus_is_moving(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_level
{
public:
  explicit Init_RobotStatus_battery_level(::industrial_turtle::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_current_task battery_level(::industrial_turtle::msg::RobotStatus::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_RobotStatus_current_task(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

class Init_RobotStatus_position_y
{
public:
  explicit Init_RobotStatus_position_y(::industrial_turtle::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_level position_y(::industrial_turtle::msg::RobotStatus::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return Init_RobotStatus_battery_level(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

class Init_RobotStatus_position_x
{
public:
  explicit Init_RobotStatus_position_x(::industrial_turtle::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_position_y position_x(::industrial_turtle::msg::RobotStatus::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_RobotStatus_position_y(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  Init_RobotStatus_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_position_x robot_id(::industrial_turtle::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_position_x(msg_);
  }

private:
  ::industrial_turtle::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::industrial_turtle::msg::RobotStatus>()
{
  return industrial_turtle::msg::builder::Init_RobotStatus_robot_id();
}

}  // namespace industrial_turtle

#endif  // INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
