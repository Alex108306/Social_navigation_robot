#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>
#include <gazebo_msgs/srv/get_model_state.hpp>

class GetModelStateNode : public rclcpp::Node
{
public:
  GetModelStateNode() : Node("get_model_state_node")
  {
    // Create a client for the Gazebo service to get the model state
    model_state_client_ = create_client<gazebo_msgs::srv::GetModelState>("/gazebo/get_model_state");

    // Set the name of the model in Gazebo that you want to retrieve the state for
    model_name_ = "your_model_name";

    // Create a timer to periodically call the service
    timer_ = create_wall_timer(std::chrono::seconds(1), std::bind(&GetModelStateNode::getModelState, this));
  }

private:
  void getModelState()
  {
    // Check if the service client is ready
    if (!model_state_client_->service_is_ready())
    {
      RCLCPP_WARN(this->get_logger(), "Service is not available.");
      return;
    }

    // Create a request to get the model state
    auto request = std::make_shared<gazebo_msgs::srv::GetModelState::Request>();
    request->model_name = model_name_;

    // Call the service asynchronously
    auto future = model_state_client_->async_send_request(request);

    // Wait for the response
    if (rclcpp::spin_until_future_complete(shared_from_this(), future) !=
        rclcpp::FutureReturnCode::SUCCESS)
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to call service");
      return;
    }

    // Process the response
    auto response = future.get();
    if (response->success)
    {
      // Extract the pose information from the response
      auto model_pose = response->pose;
      RCLCPP_INFO(this->get_logger(), "Model Pose: x=%f, y=%f, z=%f", model_pose.position.x, model_pose.position.y,
                  model_pose.position.z);
      RCLCPP_INFO(this->get_logger(), "Model Orientation: qx=%f, qy=%f, qz=%f, qw=%f", model_pose.orientation.x,
                  model_pose.orientation.y, model_pose.orientation.z, model_pose.orientation.w);
    }
    else
    {
      RCLCPP_WARN(this->get_logger(), "Failed to get model state: %s", response->status_message.c_str());
    }
  }

  rclcpp::Client<gazebo_msgs::srv::GetModelState>::SharedPtr model_state_client_;
  std::string model_name_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<GetModelStateNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}