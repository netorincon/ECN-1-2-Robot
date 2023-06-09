import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.substitutions  import LaunchConfiguration, Command
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.conditions import LaunchConfigurationEquals

import xacro

def generate_launch_description():

    # Check if we are told to use sim time
    use_sim_time = LaunchConfiguration('use_sim_time')
    use_ros2_control = LaunchConfiguration('use_ros2_control')
    mode=LaunchConfiguration('mode')

    # Process the URDF file
    pkg_path = os.path.join(get_package_share_directory('workstation'))
    xacro_file = os.path.join(pkg_path,'description',"robot.urdf.xacro")
    robot_description_config = Command(['xacro ', xacro_file, " use_ros2_control:=", use_ros2_control, " sim_time:=", use_sim_time])

    # Create robot_state_publisher node
    params1 = {'robot_description': robot_description_config, 'use_sim_time': use_sim_time}
    robot_state_publisher = Node(
        package = 'robot_state_publisher',
        executable = 'robot_state_publisher',
        output = 'screen',
        parameters = [params1]
    )

    sim = Node(
        package = 'workstation',
        executable = 'sim',
        output = 'screen',
    )

    rqt = Node(
        package = 'rqt_gui',
        executable = 'rqt_gui',
        output = 'screen',
    )
    
    controller =Node(
        package='workstation',
        executable='controller',
        output='screen',
        condition=LaunchConfigurationEquals('mode', 'controller'),
    )

    # Create Rviz node
    rviz = Node(
        package = 'rviz2',
        executable = 'rviz2',
        output = 'screen',
        arguments=['-d', [os.path.join(pkg_path, 'config', 'robot_sim.rviz')]]
    )
    # Launch
    return LaunchDescription([
		
        DeclareLaunchArgument(
            "use_sim_time",
            default_value = "false",
            description = 'use sim time if true '),
            
        DeclareLaunchArgument(
            "use_ros2_control",
            default_value = "true",
            description = 'use ros2 control if true'),
        DeclareLaunchArgument(
            "mode",
            default_value = "velocity",
            description = 'Use manual velocity sliders as default'),

        robot_state_publisher,
        sim,
        rviz,
        controller,
        rqt
   
    ])

