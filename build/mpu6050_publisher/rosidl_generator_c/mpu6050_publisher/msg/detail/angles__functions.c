// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mpu6050_publisher:msg/Angles.idl
// generated code does not contain a copyright notice
#include "mpu6050_publisher/msg/detail/angles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mpu6050_publisher__msg__Angles__init(mpu6050_publisher__msg__Angles * msg)
{
  if (!msg) {
    return false;
  }
  // anglex
  // angley
  return true;
}

void
mpu6050_publisher__msg__Angles__fini(mpu6050_publisher__msg__Angles * msg)
{
  if (!msg) {
    return;
  }
  // anglex
  // angley
}

bool
mpu6050_publisher__msg__Angles__are_equal(const mpu6050_publisher__msg__Angles * lhs, const mpu6050_publisher__msg__Angles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // anglex
  if (lhs->anglex != rhs->anglex) {
    return false;
  }
  // angley
  if (lhs->angley != rhs->angley) {
    return false;
  }
  return true;
}

bool
mpu6050_publisher__msg__Angles__copy(
  const mpu6050_publisher__msg__Angles * input,
  mpu6050_publisher__msg__Angles * output)
{
  if (!input || !output) {
    return false;
  }
  // anglex
  output->anglex = input->anglex;
  // angley
  output->angley = input->angley;
  return true;
}

mpu6050_publisher__msg__Angles *
mpu6050_publisher__msg__Angles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpu6050_publisher__msg__Angles * msg = (mpu6050_publisher__msg__Angles *)allocator.allocate(sizeof(mpu6050_publisher__msg__Angles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mpu6050_publisher__msg__Angles));
  bool success = mpu6050_publisher__msg__Angles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mpu6050_publisher__msg__Angles__destroy(mpu6050_publisher__msg__Angles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mpu6050_publisher__msg__Angles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mpu6050_publisher__msg__Angles__Sequence__init(mpu6050_publisher__msg__Angles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpu6050_publisher__msg__Angles * data = NULL;

  if (size) {
    data = (mpu6050_publisher__msg__Angles *)allocator.zero_allocate(size, sizeof(mpu6050_publisher__msg__Angles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mpu6050_publisher__msg__Angles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mpu6050_publisher__msg__Angles__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mpu6050_publisher__msg__Angles__Sequence__fini(mpu6050_publisher__msg__Angles__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mpu6050_publisher__msg__Angles__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mpu6050_publisher__msg__Angles__Sequence *
mpu6050_publisher__msg__Angles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpu6050_publisher__msg__Angles__Sequence * array = (mpu6050_publisher__msg__Angles__Sequence *)allocator.allocate(sizeof(mpu6050_publisher__msg__Angles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mpu6050_publisher__msg__Angles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mpu6050_publisher__msg__Angles__Sequence__destroy(mpu6050_publisher__msg__Angles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mpu6050_publisher__msg__Angles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mpu6050_publisher__msg__Angles__Sequence__are_equal(const mpu6050_publisher__msg__Angles__Sequence * lhs, const mpu6050_publisher__msg__Angles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mpu6050_publisher__msg__Angles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mpu6050_publisher__msg__Angles__Sequence__copy(
  const mpu6050_publisher__msg__Angles__Sequence * input,
  mpu6050_publisher__msg__Angles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mpu6050_publisher__msg__Angles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mpu6050_publisher__msg__Angles * data =
      (mpu6050_publisher__msg__Angles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mpu6050_publisher__msg__Angles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mpu6050_publisher__msg__Angles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mpu6050_publisher__msg__Angles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
