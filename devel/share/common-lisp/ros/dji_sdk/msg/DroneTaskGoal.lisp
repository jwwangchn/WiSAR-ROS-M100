; Auto-generated. Do not edit!


(cl:in-package dji_sdk-msg)


;//! \htmlinclude DroneTaskGoal.msg.html

(cl:defclass <DroneTaskGoal> (roslisp-msg-protocol:ros-message)
  ((task
    :reader task
    :initarg :task
    :type cl:fixnum
    :initform 0))
)

(cl:defclass DroneTaskGoal (<DroneTaskGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DroneTaskGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DroneTaskGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_sdk-msg:<DroneTaskGoal> is deprecated: use dji_sdk-msg:DroneTaskGoal instead.")))

(cl:ensure-generic-function 'task-val :lambda-list '(m))
(cl:defmethod task-val ((m <DroneTaskGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_sdk-msg:task-val is deprecated.  Use dji_sdk-msg:task instead.")
  (task m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DroneTaskGoal>) ostream)
  "Serializes a message object of type '<DroneTaskGoal>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'task)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DroneTaskGoal>) istream)
  "Deserializes a message object of type '<DroneTaskGoal>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'task)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DroneTaskGoal>)))
  "Returns string type for a message object of type '<DroneTaskGoal>"
  "dji_sdk/DroneTaskGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DroneTaskGoal)))
  "Returns string type for a message object of type 'DroneTaskGoal"
  "dji_sdk/DroneTaskGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DroneTaskGoal>)))
  "Returns md5sum for a message object of type '<DroneTaskGoal>"
  "cfae433ef22bd8313f92bc5cad00c264")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DroneTaskGoal)))
  "Returns md5sum for a message object of type 'DroneTaskGoal"
  "cfae433ef22bd8313f92bc5cad00c264")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DroneTaskGoal>)))
  "Returns full string definition for message of type '<DroneTaskGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%uint8 task ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DroneTaskGoal)))
  "Returns full string definition for message of type 'DroneTaskGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%uint8 task ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DroneTaskGoal>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DroneTaskGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'DroneTaskGoal
    (cl:cons ':task (task msg))
))
