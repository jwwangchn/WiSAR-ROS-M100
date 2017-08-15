// Generated by gencpp from file dji_sdk/GlobalPositionControlRequest.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_GLOBALPOSITIONCONTROLREQUEST_H
#define DJI_SDK_MESSAGE_GLOBALPOSITIONCONTROLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_sdk
{
template <class ContainerAllocator>
struct GlobalPositionControlRequest_
{
  typedef GlobalPositionControlRequest_<ContainerAllocator> Type;

  GlobalPositionControlRequest_()
    : latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , yaw(0.0)  {
    }
  GlobalPositionControlRequest_(const ContainerAllocator& _alloc)
    : latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef float _altitude_type;
  _altitude_type altitude;

   typedef float _yaw_type;
  _yaw_type yaw;




  typedef boost::shared_ptr< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GlobalPositionControlRequest_

typedef ::dji_sdk::GlobalPositionControlRequest_<std::allocator<void> > GlobalPositionControlRequest;

typedef boost::shared_ptr< ::dji_sdk::GlobalPositionControlRequest > GlobalPositionControlRequestPtr;
typedef boost::shared_ptr< ::dji_sdk::GlobalPositionControlRequest const> GlobalPositionControlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'dji_sdk': ['/home/ubuntu/Documents/DJI-Challenge/src/dji_sdk/msg', '/home/ubuntu/Documents/DJI-Challenge/devel/share/dji_sdk/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ebdcd08c17e4cf5167abddda7ffd6c17";
  }

  static const char* value(const ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xebdcd08c17e4cf51ULL;
  static const uint64_t static_value2 = 0x67abddda7ffd6c17ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/GlobalPositionControlRequest";
  }

  static const char* value(const ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float64 latitude\n\
\n\
float64 longitude\n\
float32 altitude\n\
\n\
float32 yaw\n\
";
  }

  static const char* value(const ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GlobalPositionControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::GlobalPositionControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<float>::stream(s, indent + "  ", v.altitude);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_GLOBALPOSITIONCONTROLREQUEST_H
