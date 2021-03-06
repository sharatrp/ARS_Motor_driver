; Auto-generated. Do not edit!


(cl:in-package ros_pololu_servo-msg)


;//! \htmlinclude pololu_trajectoryGoal.msg.html

(cl:defclass <pololu_trajectoryGoal> (roslisp-msg-protocol:ros-message)
  ((joint_trajectory
    :reader joint_trajectory
    :initarg :joint_trajectory
    :type trajectory_msgs-msg:JointTrajectory
    :initform (cl:make-instance 'trajectory_msgs-msg:JointTrajectory)))
)

(cl:defclass pololu_trajectoryGoal (<pololu_trajectoryGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <pololu_trajectoryGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'pololu_trajectoryGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_pololu_servo-msg:<pololu_trajectoryGoal> is deprecated: use ros_pololu_servo-msg:pololu_trajectoryGoal instead.")))

(cl:ensure-generic-function 'joint_trajectory-val :lambda-list '(m))
(cl:defmethod joint_trajectory-val ((m <pololu_trajectoryGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_pololu_servo-msg:joint_trajectory-val is deprecated.  Use ros_pololu_servo-msg:joint_trajectory instead.")
  (joint_trajectory m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <pololu_trajectoryGoal>) ostream)
  "Serializes a message object of type '<pololu_trajectoryGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'joint_trajectory) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <pololu_trajectoryGoal>) istream)
  "Deserializes a message object of type '<pololu_trajectoryGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'joint_trajectory) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<pololu_trajectoryGoal>)))
  "Returns string type for a message object of type '<pololu_trajectoryGoal>"
  "ros_pololu_servo/pololu_trajectoryGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'pololu_trajectoryGoal)))
  "Returns string type for a message object of type 'pololu_trajectoryGoal"
  "ros_pololu_servo/pololu_trajectoryGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<pololu_trajectoryGoal>)))
  "Returns md5sum for a message object of type '<pololu_trajectoryGoal>"
  "00c4170f44c26e68c1de38303b04fb23")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'pololu_trajectoryGoal)))
  "Returns md5sum for a message object of type 'pololu_trajectoryGoal"
  "00c4170f44c26e68c1de38303b04fb23")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<pololu_trajectoryGoal>)))
  "Returns full string definition for message of type '<pololu_trajectoryGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define goal~%trajectory_msgs/JointTrajectory joint_trajectory~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectory~%Header header~%string[] joint_names~%JointTrajectoryPoint[] points~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectoryPoint~%# Each trajectory point specifies either positions[, velocities[, accelerations]]~%# or positions[, effort] for the trajectory to be executed.~%# All specified values are in the same order as the joint names in JointTrajectory.msg~%~%float64[] positions~%float64[] velocities~%float64[] accelerations~%float64[] effort~%duration time_from_start~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'pololu_trajectoryGoal)))
  "Returns full string definition for message of type 'pololu_trajectoryGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define goal~%trajectory_msgs/JointTrajectory joint_trajectory~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectory~%Header header~%string[] joint_names~%JointTrajectoryPoint[] points~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: trajectory_msgs/JointTrajectoryPoint~%# Each trajectory point specifies either positions[, velocities[, accelerations]]~%# or positions[, effort] for the trajectory to be executed.~%# All specified values are in the same order as the joint names in JointTrajectory.msg~%~%float64[] positions~%float64[] velocities~%float64[] accelerations~%float64[] effort~%duration time_from_start~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <pololu_trajectoryGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'joint_trajectory))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <pololu_trajectoryGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'pololu_trajectoryGoal
    (cl:cons ':joint_trajectory (joint_trajectory msg))
))
