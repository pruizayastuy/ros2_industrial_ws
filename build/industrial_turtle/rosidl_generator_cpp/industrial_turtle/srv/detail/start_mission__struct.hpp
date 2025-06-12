// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from industrial_turtle:srv/StartMission.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__STRUCT_HPP_
#define INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__industrial_turtle__srv__StartMission_Request __attribute__((deprecated))
#else
# define DEPRECATED__industrial_turtle__srv__StartMission_Request __declspec(deprecated)
#endif

namespace industrial_turtle
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartMission_Request_
{
  using Type = StartMission_Request_<ContainerAllocator>;

  explicit StartMission_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->mission_type = "";
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->priority = 0l;
    }
  }

  explicit StartMission_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_alloc),
    mission_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->mission_type = "";
      this->target_x = 0.0;
      this->target_y = 0.0;
      this->priority = 0l;
    }
  }

  // field types and members
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _mission_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_type_type mission_type;
  using _target_x_type =
    double;
  _target_x_type target_x;
  using _target_y_type =
    double;
  _target_y_type target_y;
  using _priority_type =
    int32_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__mission_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_type = _arg;
    return *this;
  }
  Type & set__target_x(
    const double & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const double & _arg)
  {
    this->target_y = _arg;
    return *this;
  }
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_turtle::srv::StartMission_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_turtle::srv::StartMission_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_turtle::srv::StartMission_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_turtle::srv::StartMission_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_turtle::srv::StartMission_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_turtle::srv::StartMission_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_turtle::srv::StartMission_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_turtle::srv::StartMission_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_turtle::srv::StartMission_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_turtle::srv::StartMission_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_turtle__srv__StartMission_Request
    std::shared_ptr<industrial_turtle::srv::StartMission_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_turtle__srv__StartMission_Request
    std::shared_ptr<industrial_turtle::srv::StartMission_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartMission_Request_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->mission_type != other.mission_type) {
      return false;
    }
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartMission_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartMission_Request_

// alias to use template instance with default allocator
using StartMission_Request =
  industrial_turtle::srv::StartMission_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace industrial_turtle


#ifndef _WIN32
# define DEPRECATED__industrial_turtle__srv__StartMission_Response __attribute__((deprecated))
#else
# define DEPRECATED__industrial_turtle__srv__StartMission_Response __declspec(deprecated)
#endif

namespace industrial_turtle
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartMission_Response_
{
  using Type = StartMission_Response_<ContainerAllocator>;

  explicit StartMission_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->estimated_time = 0.0;
    }
  }

  explicit StartMission_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->estimated_time = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _estimated_time_type =
    double;
  _estimated_time_type estimated_time;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__estimated_time(
    const double & _arg)
  {
    this->estimated_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_turtle::srv::StartMission_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_turtle::srv::StartMission_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_turtle::srv::StartMission_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_turtle::srv::StartMission_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_turtle::srv::StartMission_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_turtle::srv::StartMission_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_turtle::srv::StartMission_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_turtle::srv::StartMission_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_turtle::srv::StartMission_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_turtle::srv::StartMission_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_turtle__srv__StartMission_Response
    std::shared_ptr<industrial_turtle::srv::StartMission_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_turtle__srv__StartMission_Response
    std::shared_ptr<industrial_turtle::srv::StartMission_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartMission_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->estimated_time != other.estimated_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartMission_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartMission_Response_

// alias to use template instance with default allocator
using StartMission_Response =
  industrial_turtle::srv::StartMission_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace industrial_turtle

namespace industrial_turtle
{

namespace srv
{

struct StartMission
{
  using Request = industrial_turtle::srv::StartMission_Request;
  using Response = industrial_turtle::srv::StartMission_Response;
};

}  // namespace srv

}  // namespace industrial_turtle

#endif  // INDUSTRIAL_TURTLE__SRV__DETAIL__START_MISSION__STRUCT_HPP_
