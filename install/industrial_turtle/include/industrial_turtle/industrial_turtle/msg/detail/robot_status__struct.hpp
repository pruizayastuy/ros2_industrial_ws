// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from industrial_turtle:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__industrial_turtle__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__industrial_turtle__msg__RobotStatus __declspec(deprecated)
#endif

namespace industrial_turtle
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->position_x = 0.0;
      this->position_y = 0.0;
      this->battery_level = 0.0;
      this->current_task = "";
      this->is_moving = false;
      this->speed = 0.0;
      this->status = "";
      this->completed_tasks = 0l;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_alloc),
    current_task(_alloc),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->position_x = 0.0;
      this->position_y = 0.0;
      this->battery_level = 0.0;
      this->current_task = "";
      this->is_moving = false;
      this->speed = 0.0;
      this->status = "";
      this->completed_tasks = 0l;
    }
  }

  // field types and members
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _position_x_type =
    double;
  _position_x_type position_x;
  using _position_y_type =
    double;
  _position_y_type position_y;
  using _battery_level_type =
    double;
  _battery_level_type battery_level;
  using _current_task_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_task_type current_task;
  using _is_moving_type =
    bool;
  _is_moving_type is_moving;
  using _speed_type =
    double;
  _speed_type speed;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _completed_tasks_type =
    int32_t;
  _completed_tasks_type completed_tasks;

  // setters for named parameter idiom
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__position_x(
    const double & _arg)
  {
    this->position_x = _arg;
    return *this;
  }
  Type & set__position_y(
    const double & _arg)
  {
    this->position_y = _arg;
    return *this;
  }
  Type & set__battery_level(
    const double & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__current_task(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_task = _arg;
    return *this;
  }
  Type & set__is_moving(
    const bool & _arg)
  {
    this->is_moving = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__completed_tasks(
    const int32_t & _arg)
  {
    this->completed_tasks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_turtle::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_turtle::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_turtle::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_turtle::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_turtle::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_turtle::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_turtle::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_turtle::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_turtle::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_turtle::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_turtle__msg__RobotStatus
    std::shared_ptr<industrial_turtle::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_turtle__msg__RobotStatus
    std::shared_ptr<industrial_turtle::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->position_x != other.position_x) {
      return false;
    }
    if (this->position_y != other.position_y) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->current_task != other.current_task) {
      return false;
    }
    if (this->is_moving != other.is_moving) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->completed_tasks != other.completed_tasks) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  industrial_turtle::msg::RobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace industrial_turtle

#endif  // INDUSTRIAL_TURTLE__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
