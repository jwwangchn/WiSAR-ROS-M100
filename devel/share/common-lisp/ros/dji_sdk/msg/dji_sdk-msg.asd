
(cl:in-package :asdf)

(defsystem "dji_sdk-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Acceleration" :depends-on ("_package_Acceleration"))
    (:file "_package_Acceleration" :depends-on ("_package"))
    (:file "MissionEventWpUpload" :depends-on ("_package_MissionEventWpUpload"))
    (:file "_package_MissionEventWpUpload" :depends-on ("_package"))
    (:file "TimeStamp" :depends-on ("_package_TimeStamp"))
    (:file "_package_TimeStamp" :depends-on ("_package"))
    (:file "PowerStatus" :depends-on ("_package_PowerStatus"))
    (:file "_package_PowerStatus" :depends-on ("_package"))
    (:file "MissionStatusFollowme" :depends-on ("_package_MissionStatusFollowme"))
    (:file "_package_MissionStatusFollowme" :depends-on ("_package"))
    (:file "MissionWaypointTask" :depends-on ("_package_MissionWaypointTask"))
    (:file "_package_MissionWaypointTask" :depends-on ("_package"))
    (:file "TransparentTransmissionData" :depends-on ("_package_TransparentTransmissionData"))
    (:file "_package_TransparentTransmissionData" :depends-on ("_package"))
    (:file "MissionFollowmeTask" :depends-on ("_package_MissionFollowmeTask"))
    (:file "_package_MissionFollowmeTask" :depends-on ("_package"))
    (:file "DetectionPoints" :depends-on ("_package_DetectionPoints"))
    (:file "_package_DetectionPoints" :depends-on ("_package"))
    (:file "MissionStatusWaypoint" :depends-on ("_package_MissionStatusWaypoint"))
    (:file "_package_MissionStatusWaypoint" :depends-on ("_package"))
    (:file "Compass" :depends-on ("_package_Compass"))
    (:file "_package_Compass" :depends-on ("_package"))
    (:file "MissionStatusHotpoint" :depends-on ("_package_MissionStatusHotpoint"))
    (:file "_package_MissionStatusHotpoint" :depends-on ("_package"))
    (:file "MissionWaypoint" :depends-on ("_package_MissionWaypoint"))
    (:file "_package_MissionWaypoint" :depends-on ("_package"))
    (:file "GlobalPosition" :depends-on ("_package_GlobalPosition"))
    (:file "_package_GlobalPosition" :depends-on ("_package"))
    (:file "LocalPosition" :depends-on ("_package_LocalPosition"))
    (:file "_package_LocalPosition" :depends-on ("_package"))
    (:file "Waypoint" :depends-on ("_package_Waypoint"))
    (:file "_package_Waypoint" :depends-on ("_package"))
    (:file "MissionEventWpReach" :depends-on ("_package_MissionEventWpReach"))
    (:file "_package_MissionEventWpReach" :depends-on ("_package"))
    (:file "FlightControlInfo" :depends-on ("_package_FlightControlInfo"))
    (:file "_package_FlightControlInfo" :depends-on ("_package"))
    (:file "Reldist" :depends-on ("_package_Reldist"))
    (:file "_package_Reldist" :depends-on ("_package"))
    (:file "MissionWaypointAction" :depends-on ("_package_MissionWaypointAction"))
    (:file "_package_MissionWaypointAction" :depends-on ("_package"))
    (:file "A3RTK" :depends-on ("_package_A3RTK"))
    (:file "_package_A3RTK" :depends-on ("_package"))
    (:file "Velocity" :depends-on ("_package_Velocity"))
    (:file "_package_Velocity" :depends-on ("_package"))
    (:file "MissionHotpointTask" :depends-on ("_package_MissionHotpointTask"))
    (:file "_package_MissionHotpointTask" :depends-on ("_package"))
    (:file "A3GPS" :depends-on ("_package_A3GPS"))
    (:file "_package_A3GPS" :depends-on ("_package"))
    (:file "RCChannels" :depends-on ("_package_RCChannels"))
    (:file "_package_RCChannels" :depends-on ("_package"))
    (:file "MissionStatusOther" :depends-on ("_package_MissionStatusOther"))
    (:file "_package_MissionStatusOther" :depends-on ("_package"))
    (:file "AttitudeQuaternion" :depends-on ("_package_AttitudeQuaternion"))
    (:file "_package_AttitudeQuaternion" :depends-on ("_package"))
    (:file "MissionEventWpAction" :depends-on ("_package_MissionEventWpAction"))
    (:file "_package_MissionEventWpAction" :depends-on ("_package"))
    (:file "WaypointList" :depends-on ("_package_WaypointList"))
    (:file "_package_WaypointList" :depends-on ("_package"))
    (:file "Gimbal" :depends-on ("_package_Gimbal"))
    (:file "_package_Gimbal" :depends-on ("_package"))
    (:file "MissionFollowmeTarget" :depends-on ("_package_MissionFollowmeTarget"))
    (:file "_package_MissionFollowmeTarget" :depends-on ("_package"))
    (:file "MissionPushInfo" :depends-on ("_package_MissionPushInfo"))
    (:file "_package_MissionPushInfo" :depends-on ("_package"))
    (:file "GlobalPositionNavigationGoal" :depends-on ("_package_GlobalPositionNavigationGoal"))
    (:file "_package_GlobalPositionNavigationGoal" :depends-on ("_package"))
    (:file "DroneTaskResult" :depends-on ("_package_DroneTaskResult"))
    (:file "_package_DroneTaskResult" :depends-on ("_package"))
    (:file "LocalPositionNavigationResult" :depends-on ("_package_LocalPositionNavigationResult"))
    (:file "_package_LocalPositionNavigationResult" :depends-on ("_package"))
    (:file "DroneTaskActionResult" :depends-on ("_package_DroneTaskActionResult"))
    (:file "_package_DroneTaskActionResult" :depends-on ("_package"))
    (:file "GlobalPositionNavigationAction" :depends-on ("_package_GlobalPositionNavigationAction"))
    (:file "_package_GlobalPositionNavigationAction" :depends-on ("_package"))
    (:file "LocalPositionNavigationActionGoal" :depends-on ("_package_LocalPositionNavigationActionGoal"))
    (:file "_package_LocalPositionNavigationActionGoal" :depends-on ("_package"))
    (:file "LocalPositionNavigationFeedback" :depends-on ("_package_LocalPositionNavigationFeedback"))
    (:file "_package_LocalPositionNavigationFeedback" :depends-on ("_package"))
    (:file "DroneTaskActionGoal" :depends-on ("_package_DroneTaskActionGoal"))
    (:file "_package_DroneTaskActionGoal" :depends-on ("_package"))
    (:file "GlobalPositionNavigationActionFeedback" :depends-on ("_package_GlobalPositionNavigationActionFeedback"))
    (:file "_package_GlobalPositionNavigationActionFeedback" :depends-on ("_package"))
    (:file "LocalPositionNavigationActionResult" :depends-on ("_package_LocalPositionNavigationActionResult"))
    (:file "_package_LocalPositionNavigationActionResult" :depends-on ("_package"))
    (:file "LocalPositionNavigationGoal" :depends-on ("_package_LocalPositionNavigationGoal"))
    (:file "_package_LocalPositionNavigationGoal" :depends-on ("_package"))
    (:file "WaypointNavigationResult" :depends-on ("_package_WaypointNavigationResult"))
    (:file "_package_WaypointNavigationResult" :depends-on ("_package"))
    (:file "WaypointNavigationActionFeedback" :depends-on ("_package_WaypointNavigationActionFeedback"))
    (:file "_package_WaypointNavigationActionFeedback" :depends-on ("_package"))
    (:file "GlobalPositionNavigationFeedback" :depends-on ("_package_GlobalPositionNavigationFeedback"))
    (:file "_package_GlobalPositionNavigationFeedback" :depends-on ("_package"))
    (:file "WaypointNavigationGoal" :depends-on ("_package_WaypointNavigationGoal"))
    (:file "_package_WaypointNavigationGoal" :depends-on ("_package"))
    (:file "GlobalPositionNavigationResult" :depends-on ("_package_GlobalPositionNavigationResult"))
    (:file "_package_GlobalPositionNavigationResult" :depends-on ("_package"))
    (:file "GlobalPositionNavigationActionResult" :depends-on ("_package_GlobalPositionNavigationActionResult"))
    (:file "_package_GlobalPositionNavigationActionResult" :depends-on ("_package"))
    (:file "DroneTaskGoal" :depends-on ("_package_DroneTaskGoal"))
    (:file "_package_DroneTaskGoal" :depends-on ("_package"))
    (:file "DroneTaskActionFeedback" :depends-on ("_package_DroneTaskActionFeedback"))
    (:file "_package_DroneTaskActionFeedback" :depends-on ("_package"))
    (:file "DroneTaskFeedback" :depends-on ("_package_DroneTaskFeedback"))
    (:file "_package_DroneTaskFeedback" :depends-on ("_package"))
    (:file "LocalPositionNavigationActionFeedback" :depends-on ("_package_LocalPositionNavigationActionFeedback"))
    (:file "_package_LocalPositionNavigationActionFeedback" :depends-on ("_package"))
    (:file "LocalPositionNavigationAction" :depends-on ("_package_LocalPositionNavigationAction"))
    (:file "_package_LocalPositionNavigationAction" :depends-on ("_package"))
    (:file "WaypointNavigationFeedback" :depends-on ("_package_WaypointNavigationFeedback"))
    (:file "_package_WaypointNavigationFeedback" :depends-on ("_package"))
    (:file "GlobalPositionNavigationActionGoal" :depends-on ("_package_GlobalPositionNavigationActionGoal"))
    (:file "_package_GlobalPositionNavigationActionGoal" :depends-on ("_package"))
    (:file "WaypointNavigationActionResult" :depends-on ("_package_WaypointNavigationActionResult"))
    (:file "_package_WaypointNavigationActionResult" :depends-on ("_package"))
    (:file "DroneTaskAction" :depends-on ("_package_DroneTaskAction"))
    (:file "_package_DroneTaskAction" :depends-on ("_package"))
    (:file "WaypointNavigationAction" :depends-on ("_package_WaypointNavigationAction"))
    (:file "_package_WaypointNavigationAction" :depends-on ("_package"))
    (:file "WaypointNavigationActionGoal" :depends-on ("_package_WaypointNavigationActionGoal"))
    (:file "_package_WaypointNavigationActionGoal" :depends-on ("_package"))
  ))