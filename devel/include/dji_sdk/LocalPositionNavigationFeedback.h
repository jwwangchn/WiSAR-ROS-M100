// Generated by gencpp from file dji_sdk/LocalPositionNavigationFeedback.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_LOCALPOSITIONNAVIGATIONFEEDBACK_H
#define DJI_SDK_MESSAGE_LOCALPOSITIONNAVIGATIONFEEDBACK_H


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
struct LocalPositionNavigationFeedback_
{
  typedef LocalPositionNavigationFeedback_<ContainerAllocator> Type;

  LocalPositionNavigationFeedback_()
    : x_progress(0)
    , y_progress(0)
    , z_progress(0)  {
    }
  LocalPositionNavigationFeedback_(const ContainerAllocator& _alloc)
    : x_progress(0)
    , y_progress(0)
    , z_progress(0)  {
  (void)_alloc;
    }



   typedef uint8_t _x_progress_type;
  _x_progress_type x_progress;

   typedef uint8_t _y_progress_type;
  _y_progress_type y_progress;

   typedef uint8_t _z_progress_type;
  _z_progress_type z_progress;




  typedef boost::shared_ptr< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct LocalPositionNavigationFeedback_

typedef ::dji_sdk::LocalPositionNavigationFeedback_<std::allocator<void> > LocalPositionNavigationFeedback;

typedef boost::shared_ptr< ::dji_sdk::LocalPositionNavigationFeedback > LocalPositionNavigationFeedbackPtr;
typedef boost::shared_ptr< ::dji_sdk::LocalPositionNavigationFeedback const> LocalPositionNavigationFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc1f44f25fca6f00e17022e1b8cc9f3e";
  }

  static const char* value(const ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc1f44f25fca6f00ULL;
  static const uint64_t static_value2 = 0xe17022e1b8cc9f3eULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/LocalPositionNavigationFeedback";
  }

  static const char* value(const ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#progress is in percent\n\
uint8 x_progress \n\
uint8 y_progress \n\
uint8 z_progress \n\
\n\
";
  }

  static const char* value(const ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x_progress);
      stream.next(m.y_progress);
      stream.next(m.z_progress);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocalPositionNavigationFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::LocalPositionNavigationFeedback_<ContainerAllocator>& v)
  {
    s << indent << "x_progress: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.x_progress);
    s << indent << "y_progress: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.y_progress);
    s << indent << "z_progress: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.z_progress);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_LOCALPOSITIONNAVIGATIONFEEDBACK_H
