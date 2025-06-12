#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from industrial_turtle.srv import StartMission
from geometry_msgs.msg import Twist
from std_msgs.msg import String
import json
import math

class MissionService(Node):
    def __init__(self):
        super().__init__('mission_service')
        
        # Crear servicio
        self.mission_service = self.create_service(
            StartMission,
            'start_mission',
            self.start_mission_callback
        )
        
        # Publicador de comandos
        self.command_publisher = self.create_publisher(String, 'robot_commands', 10)
        
        self.get_logger().info('🎯 Mission Service iniciado')
    
    def start_mission_callback(self, request, response):
        """Procesar solicitud de misión"""
        self.get_logger().info(
            f'Nueva misión para {request.robot_id}: {request.mission_type}'
        )
        
        # Validar robot
        if request.robot_id != "turtle1":
            response.success = False
            response.message = f"Robot {request.robot_id} no encontrado"
            response.estimated_time = 0.0
            return response
        
        # Procesar diferentes tipos de misión
        if request.mission_type == "move_to_point":
            success, message, time_est = self.execute_move_mission(
                request.target_x, request.target_y
            )
        elif request.mission_type == "patrol_area":
            success, message, time_est = self.execute_patrol_mission()
        elif request.mission_type == "return_home":
            success, message, time_est = self.execute_return_home()
        else:
            success = False
            message = f"Tipo de misión desconocido: {request.mission_type}"
            time_est = 0.0
        
        response.success = success
        response.message = message
        response.estimated_time = time_est
        
        return response
    
    def execute_move_mission(self, target_x, target_y):
        """Ejecutar misión de movimiento a punto específico"""
        try:
            # Calcular tiempo estimado (distancia aproximada)
            distance = math.sqrt(target_x**2 + target_y**2)
            estimated_time = distance / 2.0  # Asumiendo velocidad de 2 unidades/seg
            
            # Enviar comando de movimiento
            command = {
                "action": "move_forward",
                "speed": 2.0,
                "target_x": target_x,
                "target_y": target_y
            }
            
            command_msg = String()
            command_msg.data = json.dumps(command)
            self.command_publisher.publish(command_msg)
            
            return True, f"Moviéndose a ({target_x}, {target_y})", estimated_time
            
        except Exception as e:
            return False, f"Error en misión de movimiento: {str(e)}", 0.0
    
    def execute_patrol_mission(self):
        """Ejecutar misión de patrullaje"""
        try:
            command = {"action": "patrol"}
            command_msg = String()
            command_msg.data = json.dumps(command)
            self.command_publisher.publish(command_msg)
            
            return True, "Iniciando patrullaje automático", 60.0
            
        except Exception as e:
            return False, f"Error en misión de patrullaje: {str(e)}", 0.0
    
    def execute_return_home(self):
        """Ejecutar misión de retorno a base"""
        try:
            # Enviar comando para ir al centro (5.5, 5.5)
            command = {
                "action": "move_forward",
                "speed": 1.5,
                "target_x": 5.5,
                "target_y": 5.5
            }
            
            command_msg = String()
            command_msg.data = json.dumps(command)
            self.command_publisher.publish(command_msg)
            
            return True, "Regresando a base", 10.0
            
        except Exception as e:
            return False, f"Error en retorno a base: {str(e)}", 0.0

def main(args=None):
    rclpy.init(args=args)
    service = MissionService()
    
    try:
        rclpy.spin(service)
    except KeyboardInterrupt:
        pass
    finally:
        service.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()