#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "msg/angles.hpp"
#include <libmpu/MPU6050.h>

using namespace std::chrono_literals;

class MPU6050Publisher : public rclcpp::Node
{
public:
  MPU6050Publisher()
  : Node("mpu6050_publisher")
  {
    publisher_ = this->create_publisher<msg::Angles>("MPU6050", 10);
    timer_ = this->create_wall_timer(
      100ms, std::bind(&MPU6050Publisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    float currentAngleX, currentAngleY = 0.0;
    device.calc_yaw = true;
    device.getAngle(0 , &currentAngleX);
    device.getAngle(1 , &currentAngleY);

    auto message = msg::Angles();
    message.anglex = currentAngleX;
    message.angley = currentAngleY;

    RCLCPP_INFO_STREAM(this->get_logger(), "Publishing: X : '" << message.anglex << "', Y : " << message.angley);
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<msg::Angles>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MPU6050Publisher>());
  rclcpp::shutdown();
  return 0;
}
