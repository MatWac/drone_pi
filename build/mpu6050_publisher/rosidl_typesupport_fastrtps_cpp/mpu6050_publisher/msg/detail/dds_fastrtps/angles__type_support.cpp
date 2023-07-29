// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mpu6050_publisher:msg/Angles.idl
// generated code does not contain a copyright notice
#include "mpu6050_publisher/msg/detail/angles__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mpu6050_publisher/msg/detail/angles__functions.h"
#include "mpu6050_publisher/msg/detail/angles__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mpu6050_publisher
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpu6050_publisher
cdr_serialize(
  const mpu6050_publisher::msg::Angles & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: anglex
  cdr << ros_message.anglex;
  // Member: angley
  cdr << ros_message.angley;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpu6050_publisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mpu6050_publisher::msg::Angles & ros_message)
{
  // Member: anglex
  cdr >> ros_message.anglex;

  // Member: angley
  cdr >> ros_message.angley;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpu6050_publisher
get_serialized_size(
  const mpu6050_publisher::msg::Angles & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: anglex
  {
    size_t item_size = sizeof(ros_message.anglex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angley
  {
    size_t item_size = sizeof(ros_message.angley);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpu6050_publisher
max_serialized_size_Angles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: anglex
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angley
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Angles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mpu6050_publisher::msg::Angles *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Angles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mpu6050_publisher::msg::Angles *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Angles__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mpu6050_publisher::msg::Angles *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Angles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Angles(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Angles__callbacks = {
  "mpu6050_publisher::msg",
  "Angles",
  _Angles__cdr_serialize,
  _Angles__cdr_deserialize,
  _Angles__get_serialized_size,
  _Angles__max_serialized_size
};

static rosidl_message_type_support_t _Angles__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Angles__callbacks,
  get_message_typesupport_handle_function,
  &mpu6050_publisher__msg__Angles__get_type_hash,
  &mpu6050_publisher__msg__Angles__get_type_description,
  &mpu6050_publisher__msg__Angles__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mpu6050_publisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mpu6050_publisher
const rosidl_message_type_support_t *
get_message_type_support_handle<mpu6050_publisher::msg::Angles>()
{
  return &mpu6050_publisher::msg::typesupport_fastrtps_cpp::_Angles__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mpu6050_publisher, msg, Angles)() {
  return &mpu6050_publisher::msg::typesupport_fastrtps_cpp::_Angles__handle;
}

#ifdef __cplusplus
}
#endif
