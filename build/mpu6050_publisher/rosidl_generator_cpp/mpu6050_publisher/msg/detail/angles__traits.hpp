// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mpu6050_publisher:msg/Angles.idl
// generated code does not contain a copyright notice

#ifndef MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__TRAITS_HPP_
#define MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mpu6050_publisher/msg/detail/angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mpu6050_publisher
{

namespace msg
{

inline void to_flow_style_yaml(
  const Angles & msg,
  std::ostream & out)
{
  out << "{";
  // member: anglex
  {
    out << "anglex: ";
    rosidl_generator_traits::value_to_yaml(msg.anglex, out);
    out << ", ";
  }

  // member: angley
  {
    out << "angley: ";
    rosidl_generator_traits::value_to_yaml(msg.angley, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Angles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: anglex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anglex: ";
    rosidl_generator_traits::value_to_yaml(msg.anglex, out);
    out << "\n";
  }

  // member: angley
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angley: ";
    rosidl_generator_traits::value_to_yaml(msg.angley, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Angles & msg, bool use_flow_style = false)
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

}  // namespace mpu6050_publisher

namespace rosidl_generator_traits
{

[[deprecated("use mpu6050_publisher::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mpu6050_publisher::msg::Angles & msg,
  std::ostream & out, size_t indentation = 0)
{
  mpu6050_publisher::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mpu6050_publisher::msg::to_yaml() instead")]]
inline std::string to_yaml(const mpu6050_publisher::msg::Angles & msg)
{
  return mpu6050_publisher::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mpu6050_publisher::msg::Angles>()
{
  return "mpu6050_publisher::msg::Angles";
}

template<>
inline const char * name<mpu6050_publisher::msg::Angles>()
{
  return "mpu6050_publisher/msg/Angles";
}

template<>
struct has_fixed_size<mpu6050_publisher::msg::Angles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mpu6050_publisher::msg::Angles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mpu6050_publisher::msg::Angles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__TRAITS_HPP_
