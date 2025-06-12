#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from industrial_turtle.msg import RobotStatus
import random

class StatusMonitor(Node):
    def __init__(self):
        super().__init__('status_monitor')
        
        # Suscriptor a la posición de turtle1
        self.pose_subscriber = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )
        
        # Publicador de estado del robot
        self.status_publisher = self.create_publisher(
            RobotStatus,
            'robot_status',
            10
        )
        
        # Variables de estado
        self.current_pose = None
        self.battery_level = 100.0
        self.completed_tasks = 0
        self.current_task = "standby"
        
        # Timer para publicar estado
        self.status_timer = self.create_timer(1.0, self.publish_status)
        
        self.get_logger().info('📊 Status Monitor iniciado')
    
    def pose_callback(self, msg):
        """Actualizar posición actual"""
        self.current_pose = msg
        
        # Simular consumo de batería basado en movimiento
        if abs(msg.linear_velocity) > 0.1 or abs(msg.angular_velocity) > 0.1:
            self.battery_level = max(0.0, self.battery_level - 0.1)
            self.current_task = "moving"
        else:
            self.current_task = "standby"
    
    def publish_status(self):
        """Publicar estado completo del robot"""
        if self.current_pose is None:
            return
        
        status = RobotStatus()
        status.robot_id = "turtle1"
        status.position_x = self.current_pose.x
        status.position_y = self.current_pose.y
        status.battery_level = self.battery_level
        status.current_task = self.current_task
        status.is_moving = abs(self.current_pose.linear_velocity) > 0.1
        status.speed = self.current_pose.linear_velocity
        status.completed_tasks = self.completed_tasks
        
        # Determinar estado general
        if self.battery_level > 50:
            status.status = "operational"
        elif self.battery_level > 20:
            status.status = "low_battery"
        else:
            status.status = "critical_battery"
        
        self.status_publisher.publish(status)
        
        # Log cada 5 segundos
        if int(self.get_clock().now().nanoseconds / 1e9) % 5 == 0:
            self.get_logger().info(
                f'Estado: {status.status} | Batería: {status.battery_level:.1f}% | '
                f'Pos: ({status.position_x:.1f}, {status.position_y:.1f})'
            )

def main(args=None):
    rclpy.init(args=args)
    monitor = StatusMonitor()
    
    try:
        rclpy.spin(monitor)
    except KeyboardInterrupt:
        pass
    finally:
        monitor.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()