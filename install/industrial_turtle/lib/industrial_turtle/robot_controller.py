#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String
import json
import math

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        
        # Publicador de comandos a turtle1
        self.cmd_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        # Suscriptor a comandos de robot
        self.command_subscriber = self.create_subscription(
            String,
            'robot_commands',
            self.command_callback,
            10
        )
        
        # Variables de estado
        self.current_mission = None
        self.is_active = False
        
        self.get_logger().info('🤖 Robot Controller iniciado')
    
    def command_callback(self, msg):
        """Procesar comandos JSON para el robot"""
        try:
            command = json.loads(msg.data)
            self.get_logger().info(f'Comando recibido: {command}')
            
            if command['action'] == 'move_forward':
                self.move_forward(command.get('speed', 2.0))
            elif command['action'] == 'turn_left':
                self.turn_left(command.get('angle', 1.57))  # 90 grados
            elif command['action'] == 'turn_right':
                self.turn_right(command.get('angle', 1.57))
            elif command['action'] == 'stop':
                self.stop_robot()
            elif command['action'] == 'patrol':
                self.start_patrol()
                
        except json.JSONDecodeError:
            self.get_logger().error('Comando JSON inválido')
    
    def move_forward(self, speed):
        """Mover robot hacia adelante"""
        twist = Twist()
        twist.linear.x = speed
        twist.angular.z = 0.0
        self.cmd_publisher.publish(twist)
        self.get_logger().info(f'Moviendo hacia adelante a velocidad {speed}')
    
    def turn_left(self, angle):
        """Girar a la izquierda"""
        twist = Twist()
        twist.linear.x = 0.0
        twist.angular.z = angle
        self.cmd_publisher.publish(twist)
        self.get_logger().info(f'Girando izquierda {angle} rad')
    
    def turn_right(self, angle):
        """Girar a la derecha"""
        twist = Twist()
        twist.linear.x = 0.0
        twist.angular.z = -angle
        self.cmd_publisher.publish(twist)
        self.get_logger().info(f'Girando derecha {angle} rad')
    
    def stop_robot(self):
        """Detener robot"""
        twist = Twist()
        self.cmd_publisher.publish(twist)
        self.get_logger().info('Robot detenido')
    
    def start_patrol(self):
        """Iniciar patrullaje automático"""
        self.get_logger().info('Iniciando patrullaje automático')
        # Crear timer para patrullaje
        self.patrol_timer = self.create_timer(2.0, self.patrol_callback)
        self.patrol_step = 0
    
    def patrol_callback(self):
        """Ejecutar patrón de patrullaje"""
        if self.patrol_step == 0:
            self.move_forward(2.0)
        elif self.patrol_step == 1:
            self.turn_right(1.57)
        elif self.patrol_step == 2:
            self.move_forward(2.0)
        elif self.patrol_step == 3:
            self.turn_right(1.57)
        
        self.patrol_step = (self.patrol_step + 1) % 4

def main(args=None):
    rclpy.init(args=args)
    controller = RobotController()
    
    try:
        rclpy.spin(controller)
    except KeyboardInterrupt:
        pass
    finally:
        controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()