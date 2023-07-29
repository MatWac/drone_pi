// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mpu6050_publisher:msg/Angles.idl
// generated code does not contain a copyright notice

#include "mpu6050_publisher/msg/detail/angles__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mpu6050_publisher
const rosidl_type_hash_t *
mpu6050_publisher__msg__Angles__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0x64, 0xb5, 0x84, 0x06, 0x6e, 0x06, 0xd1,
      0x88, 0x3b, 0x79, 0xa5, 0x30, 0x90, 0x90, 0xad,
      0x93, 0x9a, 0xe8, 0x0b, 0x5c, 0xcb, 0x10, 0x1b,
      0xaf, 0x9b, 0xbe, 0x69, 0x1b, 0xe9, 0x6c, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mpu6050_publisher__msg__Angles__TYPE_NAME[] = "mpu6050_publisher/msg/Angles";

// Define type names, field names, and default values
static char mpu6050_publisher__msg__Angles__FIELD_NAME__anglex[] = "anglex";
static char mpu6050_publisher__msg__Angles__FIELD_NAME__angley[] = "angley";

static rosidl_runtime_c__type_description__Field mpu6050_publisher__msg__Angles__FIELDS[] = {
  {
    {mpu6050_publisher__msg__Angles__FIELD_NAME__anglex, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpu6050_publisher__msg__Angles__FIELD_NAME__angley, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mpu6050_publisher__msg__Angles__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mpu6050_publisher__msg__Angles__TYPE_NAME, 28, 28},
      {mpu6050_publisher__msg__Angles__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 anglex\n"
  "float64 angley\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mpu6050_publisher__msg__Angles__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mpu6050_publisher__msg__Angles__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpu6050_publisher__msg__Angles__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mpu6050_publisher__msg__Angles__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
