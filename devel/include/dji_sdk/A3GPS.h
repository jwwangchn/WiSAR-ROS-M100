// Generated by gencpp from file dji_sdk/A3GPS.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_A3GPS_H
#define DJI_SDK_MESSAGE_A3GPS_H


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
struct A3GPS_
{
  typedef A3GPS_<ContainerAllocator> Type;

  A3GPS_()
    : date(0)
    , time(0)
    , longitude(0)
    , latitude(0)
    , height_above_sea(0)
    , velocity_north(0.0)
    , velocity_east(0.0)
    , velocity_ground(0.0)
    , horizontal_dop(0.0)
    , position_dop(0.0)
    , gps_fix(0.0)
    , vertical_position_accuracy(0.0)
    , horizontal_position_accuracy(0.0)
    , velocity_accuracy(0.0)
    , gps_satellite_used(0)
    , glonass_satellite_used(0)
    , total_satellite_used(0)
    , gps_state(0)  {
    }
  A3GPS_(const ContainerAllocator& _alloc)
    : date(0)
    , time(0)
    , longitude(0)
    , latitude(0)
    , height_above_sea(0)
    , velocity_north(0.0)
    , velocity_east(0.0)
    , velocity_ground(0.0)
    , horizontal_dop(0.0)
    , position_dop(0.0)
    , gps_fix(0.0)
    , vertical_position_accuracy(0.0)
    , horizontal_position_accuracy(0.0)
    , velocity_accuracy(0.0)
    , gps_satellite_used(0)
    , glonass_satellite_used(0)
    , total_satellite_used(0)
    , gps_state(0)  {
  (void)_alloc;
    }



   typedef uint32_t _date_type;
  _date_type date;

   typedef uint32_t _time_type;
  _time_type time;

   typedef int32_t _longitude_type;
  _longitude_type longitude;

   typedef int32_t _latitude_type;
  _latitude_type latitude;

   typedef int32_t _height_above_sea_type;
  _height_above_sea_type height_above_sea;

   typedef float _velocity_north_type;
  _velocity_north_type velocity_north;

   typedef float _velocity_east_type;
  _velocity_east_type velocity_east;

   typedef float _velocity_ground_type;
  _velocity_ground_type velocity_ground;

   typedef float _horizontal_dop_type;
  _horizontal_dop_type horizontal_dop;

   typedef float _position_dop_type;
  _position_dop_type position_dop;

   typedef float _gps_fix_type;
  _gps_fix_type gps_fix;

   typedef float _vertical_position_accuracy_type;
  _vertical_position_accuracy_type vertical_position_accuracy;

   typedef float _horizontal_position_accuracy_type;
  _horizontal_position_accuracy_type horizontal_position_accuracy;

   typedef float _velocity_accuracy_type;
  _velocity_accuracy_type velocity_accuracy;

   typedef uint32_t _gps_satellite_used_type;
  _gps_satellite_used_type gps_satellite_used;

   typedef uint32_t _glonass_satellite_used_type;
  _glonass_satellite_used_type glonass_satellite_used;

   typedef uint16_t _total_satellite_used_type;
  _total_satellite_used_type total_satellite_used;

   typedef uint16_t _gps_state_type;
  _gps_state_type gps_state;




  typedef boost::shared_ptr< ::dji_sdk::A3GPS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::A3GPS_<ContainerAllocator> const> ConstPtr;

}; // struct A3GPS_

typedef ::dji_sdk::A3GPS_<std::allocator<void> > A3GPS;

typedef boost::shared_ptr< ::dji_sdk::A3GPS > A3GPSPtr;
typedef boost::shared_ptr< ::dji_sdk::A3GPS const> A3GPSConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::A3GPS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::A3GPS_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_sdk::A3GPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::A3GPS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::A3GPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::A3GPS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::A3GPS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::A3GPS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::A3GPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd0ebd44de0d17f8448fe67c3e9af79d";
  }

  static const char* value(const ::dji_sdk::A3GPS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd0ebd44de0d17f8ULL;
  static const uint64_t static_value2 = 0x448fe67c3e9af79dULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::A3GPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/A3GPS";
  }

  static const char* value(const ::dji_sdk::A3GPS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::A3GPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 date #GPS date\n\
uint32 time #GPS time\n\
int32 longitude #unit in degree*10^7\n\
int32 latitude  #unit in degree*10^7\n\
int32 height_above_sea #unit in mm \n\
float32 velocity_north #unit in cm/s\n\
float32 velocity_east #unit in cm/s\n\
float32 velocity_ground #unit in cm/s\n\
float32 horizontal_dop\n\
float32 position_dop \n\
float32 gps_fix\n\
float32 vertical_position_accuracy\n\
float32 horizontal_position_accuracy\n\
float32 velocity_accuracy\n\
uint32 gps_satellite_used\n\
uint32 glonass_satellite_used\n\
uint16 total_satellite_used\n\
uint16 gps_state \n\
";
  }

  static const char* value(const ::dji_sdk::A3GPS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::A3GPS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.date);
      stream.next(m.time);
      stream.next(m.longitude);
      stream.next(m.latitude);
      stream.next(m.height_above_sea);
      stream.next(m.velocity_north);
      stream.next(m.velocity_east);
      stream.next(m.velocity_ground);
      stream.next(m.horizontal_dop);
      stream.next(m.position_dop);
      stream.next(m.gps_fix);
      stream.next(m.vertical_position_accuracy);
      stream.next(m.horizontal_position_accuracy);
      stream.next(m.velocity_accuracy);
      stream.next(m.gps_satellite_used);
      stream.next(m.glonass_satellite_used);
      stream.next(m.total_satellite_used);
      stream.next(m.gps_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct A3GPS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::A3GPS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::A3GPS_<ContainerAllocator>& v)
  {
    s << indent << "date: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.date);
    s << indent << "time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time);
    s << indent << "longitude: ";
    Printer<int32_t>::stream(s, indent + "  ", v.longitude);
    s << indent << "latitude: ";
    Printer<int32_t>::stream(s, indent + "  ", v.latitude);
    s << indent << "height_above_sea: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height_above_sea);
    s << indent << "velocity_north: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_north);
    s << indent << "velocity_east: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_east);
    s << indent << "velocity_ground: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_ground);
    s << indent << "horizontal_dop: ";
    Printer<float>::stream(s, indent + "  ", v.horizontal_dop);
    s << indent << "position_dop: ";
    Printer<float>::stream(s, indent + "  ", v.position_dop);
    s << indent << "gps_fix: ";
    Printer<float>::stream(s, indent + "  ", v.gps_fix);
    s << indent << "vertical_position_accuracy: ";
    Printer<float>::stream(s, indent + "  ", v.vertical_position_accuracy);
    s << indent << "horizontal_position_accuracy: ";
    Printer<float>::stream(s, indent + "  ", v.horizontal_position_accuracy);
    s << indent << "velocity_accuracy: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_accuracy);
    s << indent << "gps_satellite_used: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_satellite_used);
    s << indent << "glonass_satellite_used: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.glonass_satellite_used);
    s << indent << "total_satellite_used: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.total_satellite_used);
    s << indent << "gps_state: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.gps_state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_A3GPS_H
