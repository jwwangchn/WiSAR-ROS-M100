// Generated by gencpp from file dji_sdk/Reldist.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_RELDIST_H
#define DJI_SDK_MESSAGE_RELDIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace dji_sdk
{
template <class ContainerAllocator>
struct Reldist_
{
  typedef Reldist_<ContainerAllocator> Type;

  Reldist_()
    : header()
    , ts(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , norm(0.0)
    , height_with_gimbal(0.0)
    , gimbal_pitch_inc(0.0)
    , gimbal_yaw_inc(0.0)
    , istracked(false)  {
    }
  Reldist_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ts(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , norm(0.0)
    , height_with_gimbal(0.0)
    , gimbal_pitch_inc(0.0)
    , gimbal_yaw_inc(0.0)
    , istracked(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _ts_type;
  _ts_type ts;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _norm_type;
  _norm_type norm;

   typedef float _height_with_gimbal_type;
  _height_with_gimbal_type height_with_gimbal;

   typedef float _gimbal_pitch_inc_type;
  _gimbal_pitch_inc_type gimbal_pitch_inc;

   typedef float _gimbal_yaw_inc_type;
  _gimbal_yaw_inc_type gimbal_yaw_inc;

   typedef uint8_t _istracked_type;
  _istracked_type istracked;




  typedef boost::shared_ptr< ::dji_sdk::Reldist_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::Reldist_<ContainerAllocator> const> ConstPtr;

}; // struct Reldist_

typedef ::dji_sdk::Reldist_<std::allocator<void> > Reldist;

typedef boost::shared_ptr< ::dji_sdk::Reldist > ReldistPtr;
typedef boost::shared_ptr< ::dji_sdk::Reldist const> ReldistConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::Reldist_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::Reldist_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'dji_sdk': ['/home/ubuntu/Documents/DJI-Challenge/src/dji_sdk/msg', '/home/ubuntu/Documents/DJI-Challenge/devel/share/dji_sdk/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::Reldist_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::Reldist_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::Reldist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::Reldist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::Reldist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::Reldist_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::Reldist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbcb8b74779bff73c25629d1055075c0";
  }

  static const char* value(const ::dji_sdk::Reldist_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbbcb8b74779bff73ULL;
  static const uint64_t static_value2 = 0xc25629d1055075c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::Reldist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/Reldist";
  }

  static const char* value(const ::dji_sdk::Reldist_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::Reldist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 ts\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 roll\n\
float32 pitch\n\
float32 yaw\n\
float32 norm\n\
float32 height_with_gimbal\n\
float32 gimbal_pitch_inc\n\
float32 gimbal_yaw_inc\n\
bool istracked\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::dji_sdk::Reldist_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::Reldist_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ts);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.norm);
      stream.next(m.height_with_gimbal);
      stream.next(m.gimbal_pitch_inc);
      stream.next(m.gimbal_yaw_inc);
      stream.next(m.istracked);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Reldist_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::Reldist_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::Reldist_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ts: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ts);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "norm: ";
    Printer<float>::stream(s, indent + "  ", v.norm);
    s << indent << "height_with_gimbal: ";
    Printer<float>::stream(s, indent + "  ", v.height_with_gimbal);
    s << indent << "gimbal_pitch_inc: ";
    Printer<float>::stream(s, indent + "  ", v.gimbal_pitch_inc);
    s << indent << "gimbal_yaw_inc: ";
    Printer<float>::stream(s, indent + "  ", v.gimbal_yaw_inc);
    s << indent << "istracked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.istracked);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_RELDIST_H
