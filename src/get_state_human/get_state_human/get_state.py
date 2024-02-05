import rclpy
from rclpy.node import Node

from gazebo_msgs.msg import ModelStates


class Getmodelstate(Node):

    def __init__(self):
        super().__init__('model_state')
        self.subscription = self.create_subscription(
            ModelStates,
            'gazebo/model_states',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        model_pose = msg.pose
            
        self.get_logger().info('I heard: "%f"' % model_pose[3].position.x)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = Getmodelstate()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()