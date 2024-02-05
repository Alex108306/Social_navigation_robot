import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Transform, Point
from people_msgs.msg import Person, People, PositionMeasurementArray
from leg_detector_msgs.msg import Human, HumanArray


class PeoplePublisher(Node):

    def __init__(self):
        super().__init__('people_publisher')
        self.publisher_ = self.create_publisher(People, '/people', 100)
        self.subscription_ = self.create_subscription(
            HumanArray,
            '/people_tracked',
            self.callback,
            10
        )
        self.subscription_

    def callback(self, data):
        point = None
        
        try:    
            if data.people and len(data.people)>0:
                i=0
                converted_people = People()
                for i in range(len(data.people)):
                    new_person = Person()
                    new_person.name = "baris"
                    new_person.position.x = data.people[i].pose.position.x
                    new_person.position.y = data.people[i].pose.position.y
                    new_person.position.z = 0.0
                    new_person.velocity.x = 0.0
                    new_person.velocity.y = 0.0
                    new_person.velocity.z = 0.0
                    new_person.reliability = 0.0
                    new_person.tagnames = []
                    new_person.tags = []


                    converted_people.header = data.header
                    converted_people.header.frame_id = "laser_frame"
                    converted_people.people.append(new_person)

                self.publisher_.publish(converted_people)

        
        except:
            point = Point()
            point.x = 0.0
            point.y = 0.0
            point.z = 0.0


def main(args=None):
    rclpy.init(args=args)
    people_publisher = PeoplePublisher()
    rclpy.spin(people_publisher)
    people_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()