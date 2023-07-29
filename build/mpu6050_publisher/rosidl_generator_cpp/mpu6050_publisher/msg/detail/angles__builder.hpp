// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mpu6050_publisher:msg/Angles.idl
// generated code does not contain a copyright notice

#ifndef MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__BUILDER_HPP_
#define MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mpu6050_publisher/msg/detail/angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mpu6050_publisher
{

namespace msg
{

namespace builder
{

class Init_Angles_angley
{
public:
  explicit Init_Angles_angley(::mpu6050_publisher::msg::Angles & msg)
  : msg_(msg)
  {}
  ::mpu6050_publisher::msg::Angles angley(::mpu6050_publisher::msg::Angles::_angley_type arg)
  {
    msg_.angley = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mpu6050_publisher::msg::Angles msg_;
};

class Init_Angles_anglex
{
public:
  Init_Angles_anglex()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Angles_angley anglex(::mpu6050_publisher::msg::Angles::_anglex_type arg)
  {
    msg_.anglex = std::move(arg);
    return Init_Angles_angley(msg_);
  }

private:
  ::mpu6050_publisher::msg::Angles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mpu6050_publisher::msg::Angles>()
{
  return mpu6050_publisher::msg::builder::Init_Angles_anglex();
}

}  // namespace mpu6050_publisher

#endif  // MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__BUILDER_HPP_
