#!/usr/bin/env python3

"""
Simple exercise to construct a controller that controls the simulated Duckiebot using pose. 
"""

import sys
sys.path.append('/home/wick/AD-simulator-master/gym-duckietown/')
#print(sys.path)
#sys.path.remove('/opt/ros/kinetic/lib/python2.7/dist-packages')

import time
import os
import sys
import argparse
import math
import numpy as np
import gym
from gym_duckietown.envs import DuckietownEnv
from gym_duckietown.simulator import Simulator
import roslaunch
from rosagent import ROSAgent


uuid = roslaunch.rlutil.get_or_generate_uuid(None, False)
roslaunch.configure_logging(uuid)
roslaunch_path = os.path.join(os.getcwd(), "catkin_ws/src/demo/launch/demo_node.launch")
launch = roslaunch.parent.ROSLaunchParent(uuid, [roslaunch_path])
launch.start()

agent = ROSAgent()

parser = argparse.ArgumentParser()
parser.add_argument('--env-name', default=None)
parser.add_argument('--map-name', default='udem1')
parser.add_argument('--no-pause', action='store_true', help="don't pause on failure")
args = parser.parse_args()

if args.env_name is None:
    env = DuckietownEnv(
        map_name = args.map_name,
        domain_rand = False,
        draw_bbox = False
    )
else:
    env = gym.make(args.env_name)

obs = env.reset()
env.render()

total_reward = 0

while True:
    action = agent.action
    print('pwm_left, pwm_right', action[0], action[1])

    lane_pose = env.get_lane_pos2(env.cur_pos, env.cur_angle)
    distance_to_road_center = lane_pose.dist
    angle_from_straight_in_rads = lane_pose.angle_rad

    ###### Start changing the code here.
    # TODO: Decide how to calculate the speed and direction.

    k_p = 10
    k_d = 1
    
    # The speed is a value between [0, 1] (which corresponds to a real speed between 0m/s and 1.2m/s)
    
    speed = 0.2 # TODO: You should overwrite this value
    
    # angle of the steering wheel, which corresponds to the angular velocity in rad/s
    steering = k_p*distance_to_road_center + k_d*angle_from_straight_in_rads # TODO: You should overwrite this value

    ###### No need to edit code below.
    
    obs, reward, done, info = env.step(action)
    total_reward += reward

    agent._publish_img(obs)
    
    print('Steps = %s, Timestep Reward=%.3f, Total Reward=%.3f' % (env.step_count, reward, total_reward))

    env.render()

    if done:
        if reward < 0:
            print('*** CRASHED ***')
        print ('Final Reward = %.3f' % total_reward)
        break

