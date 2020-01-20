
"use strict";

let Vector2D = require('./Vector2D.js');
let ObstacleImageDetection = require('./ObstacleImageDetection.js');
let AprilTagsWithInfos = require('./AprilTagsWithInfos.js');
let LEDDetection = require('./LEDDetection.js');
let KinematicsWeights = require('./KinematicsWeights.js');
let ObstacleImageDetectionList = require('./ObstacleImageDetectionList.js');
let CoordinationSignal = require('./CoordinationSignal.js');
let Segment = require('./Segment.js');
let Vsample = require('./Vsample.js');
let LanePose = require('./LanePose.js');
let Rects = require('./Rects.js');
let Trajectory = require('./Trajectory.js');
let CoordinationClearance = require('./CoordinationClearance.js');
let SourceTargetNodes = require('./SourceTargetNodes.js');
let ObstacleProjectedDetection = require('./ObstacleProjectedDetection.js');
let DuckieSensor = require('./DuckieSensor.js');
let BoolStamped = require('./BoolStamped.js');
let Pixel = require('./Pixel.js');
let StopLineReading = require('./StopLineReading.js');
let AprilTagDetectionArray = require('./AprilTagDetectionArray.js');
let CarControl = require('./CarControl.js');
let SceneSegments = require('./SceneSegments.js');
let StreetNames = require('./StreetNames.js');
let StreetNameDetection = require('./StreetNameDetection.js');
let SegmentList = require('./SegmentList.js');
let LEDDetectionDebugInfo = require('./LEDDetectionDebugInfo.js');
let Twist2DStamped = require('./Twist2DStamped.js');
let FSMState = require('./FSMState.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let VehicleCorners = require('./VehicleCorners.js');
let ObstacleProjectedDetectionList = require('./ObstacleProjectedDetectionList.js');
let AntiInstagramHealth = require('./AntiInstagramHealth.js');
let Rect = require('./Rect.js');
let LEDInterpreter = require('./LEDInterpreter.js');
let AprilTagDetection = require('./AprilTagDetection.js');
let ThetaDotSample = require('./ThetaDotSample.js');
let ObstacleType = require('./ObstacleType.js');
let KinematicsParameters = require('./KinematicsParameters.js');
let AntiInstagramTransform = require('./AntiInstagramTransform.js');
let WheelsCmdStamped = require('./WheelsCmdStamped.js');
let SignalsDetection = require('./SignalsDetection.js');
let VehiclePose = require('./VehiclePose.js');
let WheelsCmd = require('./WheelsCmd.js');
let TagInfo = require('./TagInfo.js');
let LEDDetectionArray = require('./LEDDetectionArray.js');

module.exports = {
  Vector2D: Vector2D,
  ObstacleImageDetection: ObstacleImageDetection,
  AprilTagsWithInfos: AprilTagsWithInfos,
  LEDDetection: LEDDetection,
  KinematicsWeights: KinematicsWeights,
  ObstacleImageDetectionList: ObstacleImageDetectionList,
  CoordinationSignal: CoordinationSignal,
  Segment: Segment,
  Vsample: Vsample,
  LanePose: LanePose,
  Rects: Rects,
  Trajectory: Trajectory,
  CoordinationClearance: CoordinationClearance,
  SourceTargetNodes: SourceTargetNodes,
  ObstacleProjectedDetection: ObstacleProjectedDetection,
  DuckieSensor: DuckieSensor,
  BoolStamped: BoolStamped,
  Pixel: Pixel,
  StopLineReading: StopLineReading,
  AprilTagDetectionArray: AprilTagDetectionArray,
  CarControl: CarControl,
  SceneSegments: SceneSegments,
  StreetNames: StreetNames,
  StreetNameDetection: StreetNameDetection,
  SegmentList: SegmentList,
  LEDDetectionDebugInfo: LEDDetectionDebugInfo,
  Twist2DStamped: Twist2DStamped,
  FSMState: FSMState,
  Pose2DStamped: Pose2DStamped,
  VehicleCorners: VehicleCorners,
  ObstacleProjectedDetectionList: ObstacleProjectedDetectionList,
  AntiInstagramHealth: AntiInstagramHealth,
  Rect: Rect,
  LEDInterpreter: LEDInterpreter,
  AprilTagDetection: AprilTagDetection,
  ThetaDotSample: ThetaDotSample,
  ObstacleType: ObstacleType,
  KinematicsParameters: KinematicsParameters,
  AntiInstagramTransform: AntiInstagramTransform,
  WheelsCmdStamped: WheelsCmdStamped,
  SignalsDetection: SignalsDetection,
  VehiclePose: VehiclePose,
  WheelsCmd: WheelsCmd,
  TagInfo: TagInfo,
  LEDDetectionArray: LEDDetectionArray,
};
