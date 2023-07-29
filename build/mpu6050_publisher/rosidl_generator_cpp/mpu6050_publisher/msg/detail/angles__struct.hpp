// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mpu6050_publisher:msg/Angles.idl
// generated code does not contain a copyright notice

#ifndef MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__STRUCT_HPP_
#define MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mpu6050_publisher__msg__Angles __attribute__((deprecated))
#else
# define DEPRECATED__mpu6050_publisher__msg__Angles __declspec(deprecated)
#endif

namespace mpu6050_publisher
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Angles_
{
  using Type = Angles_<ContainerAllocator>;

  explicit Angles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->anglex = 0.0;
      this->angley = 0.0;
    }
  }

  explicit Angles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->anglex = 0.0;
      this->angley = 0.0;
    }
  }

  // field types and members
  using _anglex_type =
    double;
  _anglex_type anglex;
  using _angley_type =
    double;
  _angley_type angley;

  // setters for named parameter idiom
  Type & set__anglex(
    const double & _arg)
  {
    this->anglex = _arg;
    return *this;
  }
  Type & set__angley(
    const double & _arg)
  {
    this->angley = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mpu6050_publisher::msg::Angles_<ContainerAllocator> *;
  using ConstRawPtr =
    const mpu6050_publisher::msg::Angles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mpu6050_publisher::msg::Angles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mpu6050_publisher::msg::Angles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mpu6050_publisher::msg::Angles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mpu6050_publisher::msg::Angles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mpu6050_publisher::msg::Angles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mpu6050_publisher::msg::Angles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mpu6050_publisher::msg::Angles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mpu6050_publisher::msg::Angles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mpu6050_publisher__msg__Angles
    std::shared_ptr<mpu6050_publisher::msg::Angles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mpu6050_publisher__msg__Angles
    std::shared_ptr<mpu6050_publisher::msg::Angles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Angles_ & other) const
  {
    if (this->anglex != other.anglex) {
      return false;
    }
    if (this->angley != other.angley) {
      return false;
    }
    return true;
  }
  bool operator!=(const Angles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Angles_

// alias to use template instance with default allocator
using Angles =
  mpu6050_publisher::msg::Angles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mpu6050_publisher

#endif  // MPU6050_PUBLISHER__MSG__DETAIL__ANGLES__STRUCT_HPP_
