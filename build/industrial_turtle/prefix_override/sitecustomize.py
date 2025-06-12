import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/pruizayastuy/ros2_industrial_ws/install/industrial_turtle'
