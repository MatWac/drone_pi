// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mpu6050_publisher:msg/Angles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mpu6050_publisher/msg/detail/angles__rosidl_typesupport_introspection_c.h"
#include "mpu6050_publisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mpu6050_publisher/msg/detail/angles__functions.h"
#include "mpu6050_publisher/msg/detail/angles__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mpu6050_publisher__msg__Angles__init(message_memory);
}

void mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_fini_function(void * message_memory)
{
  mpu6050_publisher__msg__Angles__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_message_member_array[2] = {
  {
    "anglex",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpu6050_publisher__msg__Angles, anglex),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angley",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpu6050_publisher__msg__Angles, angley),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_message_members = {
  "mpu6050_publisher__msg",  // message namespace
  "Angles",  // message name
  2,  // number of fields
  sizeof(mpu6050_publisher__msg__Angles),
  mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_message_member_array,  // message members
  mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_init_function,  // function to initialize message memory (memory has to be allocated)
  mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_message_type_support_handle = {
  0,
  &mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_message_members,
  get_message_typesupport_handle_function,
  &mpu6050_publisher__msg__Angles__get_type_hash,
  &mpu6050_publisher__msg__Angles__get_type_description,
  &mpu6050_publisher__msg__Angles__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mpu6050_publisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpu6050_publisher, msg, Angles)() {
  if (!mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_message_type_support_handle.typesupport_identifier) {
    mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mpu6050_publisher__msg__Angles__rosidl_typesupport_introspection_c__Angles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
