; Auto-generated. Do not edit!


(cl:in-package dji_sdk-msg)


;//! \htmlinclude LocalPositionNavigationFeedback.msg.html

(cl:defclass <LocalPositionNavigationFeedback> (roslisp-msg-protocol:ros-message)
  ((x_progress
    :reader x_progress
    :initarg :x_progress
    :type cl:fixnum
    :initform 0)
   (y_progress
    :reader y_progress
    :initarg :y_progress
    :type cl:fixnum
    :initform 0)
   (z_progress
    :reader z_progress
    :initarg :z_progress
    :type cl:fixnum
    :initform 0))
)

(cl:defclass LocalPositionNavigationFeedback (<LocalPositionNavigationFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LocalPositionNavigationFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LocalPositionNavigationFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dji_sdk-msg:<LocalPositionNavigationFeedback> is deprecated: use dji_sdk-msg:LocalPositionNavigationFeedback instead.")))

(cl:ensure-generic-function 'x_progress-val :lambda-list '(m))
(cl:defmethod x_progress-val ((m <LocalPositionNavigationFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_sdk-msg:x_progress-val is deprecated.  Use dji_sdk-msg:x_progress instead.")
  (x_progress m))

(cl:ensure-generic-function 'y_progress-val :lambda-list '(m))
(cl:defmethod y_progress-val ((m <LocalPositionNavigationFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_sdk-msg:y_progress-val is deprecated.  Use dji_sdk-msg:y_progress instead.")
  (y_progress m))

(cl:ensure-generic-function 'z_progress-val :lambda-list '(m))
(cl:defmethod z_progress-val ((m <LocalPositionNavigationFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dji_sdk-msg:z_progress-val is deprecated.  Use dji_sdk-msg:z_progress instead.")
  (z_progress m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LocalPositionNavigationFeedback>) ostream)
  "Serializes a message object of type '<LocalPositionNavigationFeedback>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'x_progress)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'y_progress)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'z_progress)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LocalPositionNavigationFeedback>) istream)
  "Deserializes a message object of type '<LocalPositionNavigationFeedback>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'x_progress)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'y_progress)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'z_progress)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LocalPositionNavigationFeedback>)))
  "Returns string type for a message object of type '<LocalPositionNavigationFeedback>"
  "dji_sdk/LocalPositionNavigationFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LocalPositionNavigationFeedback)))
  "Returns string type for a message object of type 'LocalPositionNavigationFeedback"
  "dji_sdk/LocalPositionNavigationFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LocalPositionNavigationFeedback>)))
  "Returns md5sum for a message object of type '<LocalPositionNavigationFeedback>"
  "dc1f44f25fca6f00e17022e1b8cc9f3e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LocalPositionNavigationFeedback)))
  "Returns md5sum for a message object of type 'LocalPositionNavigationFeedback"
  "dc1f44f25fca6f00e17022e1b8cc9f3e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LocalPositionNavigationFeedback>)))
  "Returns full string definition for message of type '<LocalPositionNavigationFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#progress is in percent~%uint8 x_progress ~%uint8 y_progress ~%uint8 z_progress ~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LocalPositionNavigationFeedback)))
  "Returns full string definition for message of type 'LocalPositionNavigationFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#progress is in percent~%uint8 x_progress ~%uint8 y_progress ~%uint8 z_progress ~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LocalPositionNavigationFeedback>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LocalPositionNavigationFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'LocalPositionNavigationFeedback
    (cl:cons ':x_progress (x_progress msg))
    (cl:cons ':y_progress (y_progress msg))
    (cl:cons ':z_progress (z_progress msg))
))