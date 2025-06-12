#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_srvs.srv import Empty
from geometry_msgs.msg import Twist
from std_msgs.msg import String
import json

class EmergencyService(Node):
    def __init__(self):
        super().__init__('emergency_service')
        
        # Crear servicio de emergencia
        self.emergency_service = self.create_service(
            Empty,
            'emergency_stop',
            self.emergency_stop_callback
        )
        
        # Publicador directo para parar turtle1
        self.cmd_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        # Publicador de comandos
        self.command_publisher = self.create_publisher(String, 'robot_commands', 10)
        
        self.get_logger().info('🚨 Emergency Service iniciado')
    
    def emergency_stop_callback(self, request, response):
        """Ejecutar parada de emergencia"""
        self.get_logger().warn('🚨 PARADA DE EMERGENCIA ACTIVADA')
        
        try:
            # Detener inmediatamente turtle1
            stop_twist = Twist()  # Todas las velocidades en 0
            
            # Publicar múltiples veces para asegurar la parada
            for _ in range(5):
                self.cmd_publisher.publish(stop_twist)
            
            # Enviar comando de parada
            command = {"action": "stop", "reason": "emergency"}
            command_msg = String()
            command_msg.data = json.dumps(command)
            self.command_publisher.publish(command_msg)
            
            self.get_logger().info('✅ Robot detenido exitosamente')
            
        except Exception as e:
            self.get_logger().error(f'Error en parada de emergencia: {str(e)}')
        
        return response

def main(args=None):
    rclpy.init(args=args)
    emergency = EmergencyService()
    
    try:
        rclpy.spin(emergency)
    except KeyboardInterrupt:
        pass
    finally:
        emergency.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()