// Generated by gencpp from file ros_pololu_servo/MotorStateList.msg
// DO NOT EDIT!


#ifndef ROS_POLOLU_SERVO_MESSAGE_MOTORSTATELIST_H
#define ROS_POLOLU_SERVO_MESSAGE_MOTORSTATELIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ros_pololu_servo/MotorState.h>

namespace ros_pololu_servo
{
template <class ContainerAllocator>
struct MotorStateList_
{
  typedef MotorStateList_<ContainerAllocator> Type;

  MotorStateList_()
    : motor_states()  {
    }
  MotorStateList_(const ContainerAllocator& _alloc)
    : motor_states(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::ros_pololu_servo::MotorState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ros_pololu_servo::MotorState_<ContainerAllocator> >::other >  _motor_states_type;
  _motor_states_type motor_states;




  typedef boost::shared_ptr< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> const> ConstPtr;

}; // struct MotorStateList_

typedef ::ros_pololu_servo::MotorStateList_<std::allocator<void> > MotorStateList;

typedef boost::shared_ptr< ::ros_pololu_servo::MotorStateList > MotorStateListPtr;
typedef boost::shared_ptr< ::ros_pololu_servo::MotorStateList const> MotorStateListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_pololu_servo::MotorStateList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_pololu_servo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'ros_pololu_servo': ['/home/sharat/MotorDriver_ws/src/ros_pololu_servo/msg', '/home/sharat/MotorDriver_ws/devel/share/ros_pololu_servo/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f59501f919a1edaba3d8a1c194971202";
  }

  static const char* value(const ::ros_pololu_servo::MotorStateList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf59501f919a1edabULL;
  static const uint64_t static_value2 = 0xa3d8a1c194971202ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_pololu_servo/MotorStateList";
  }

  static const char* value(const ::ros_pololu_servo::MotorStateList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_pololu_servo/MotorState[] motor_states\n\
\n\
================================================================================\n\
MSG: ros_pololu_servo/MotorState\n\
string name                                     # Name of the servo (specified in the yaml file)\n\
int8 pololu_id                                  # id of the Pololu board (12 by default)\n\
int8 motor_id                                   # id of the servo on the Pololu board\n\
int32 pulse                                     # Pwm servo pulse\n\
float64 radians                                 # Current position of the servo in radians\n\
float64 degrees                                 # Current position of the servo in degrees\n\
ros_pololu_servo/MotorCalibration calibration   # Servo calibration\n\
================================================================================\n\
MSG: ros_pololu_servo/MotorCalibration\n\
int32 min_pulse             # Minimum pwm pulse\n\
float64 min_radians         # Radians corresponding to min pwm pulse\n\
float64 min_degrees         # Degrees corresponding to min pwm pulse\n\
int32 max_pulse             # Maximum pwm pulse\n\
float64 max_radians         # Radians corresponding to max pwm pulse\n\
float64 max_degrees         # Degrees corresponding to max pwm pulse\n\
";
  }

  static const char* value(const ::ros_pololu_servo::MotorStateList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motor_states);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MotorStateList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_pololu_servo::MotorStateList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_pololu_servo::MotorStateList_<ContainerAllocator>& v)
  {
    s << indent << "motor_states[]" << std::endl;
    for (size_t i = 0; i < v.motor_states.size(); ++i)
    {
      s << indent << "  motor_states[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ros_pololu_servo::MotorState_<ContainerAllocator> >::stream(s, indent + "    ", v.motor_states[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_POLOLU_SERVO_MESSAGE_MOTORSTATELIST_H
