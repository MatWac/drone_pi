// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mpu6050_publisher:msg/Angles.idl
// generated code does not contain a copyright notice

#ifndef MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__STRUCT_H_
#define MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Angles in the package mpu6050_publisher.
typedef struct mpu6050_publisher__msg__Angles
{
  double anglex;
  double angley;
} mpu6050_publisher__msg__Angles;

// Struct for a sequence of mpu6050_publisher__msg__Angles.
typedef struct mpu6050_publisher__msg__Angles__Sequence
{
  mpu6050_publisher__msg__Angles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mpu6050_publisher__msg__Angles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__STRUCT_H_
