// Generated by gencpp from file optris_drivers/Temperature.msg
// DO NOT EDIT!


#ifndef OPTRIS_DRIVERS_MESSAGE_TEMPERATURE_H
#define OPTRIS_DRIVERS_MESSAGE_TEMPERATURE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace optris_drivers
{
template <class ContainerAllocator>
struct Temperature_
{
  typedef Temperature_<ContainerAllocator> Type;

  Temperature_()
    : header()
    , temperature_flag(0.0)
    , temperature_box(0.0)
    , temperature_chip(0.0)  {
    }
  Temperature_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , temperature_flag(0.0)
    , temperature_box(0.0)
    , temperature_chip(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _temperature_flag_type;
  _temperature_flag_type temperature_flag;

   typedef float _temperature_box_type;
  _temperature_box_type temperature_box;

   typedef float _temperature_chip_type;
  _temperature_chip_type temperature_chip;





  typedef boost::shared_ptr< ::optris_drivers::Temperature_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::optris_drivers::Temperature_<ContainerAllocator> const> ConstPtr;

}; // struct Temperature_

typedef ::optris_drivers::Temperature_<std::allocator<void> > Temperature;

typedef boost::shared_ptr< ::optris_drivers::Temperature > TemperaturePtr;
typedef boost::shared_ptr< ::optris_drivers::Temperature const> TemperatureConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::optris_drivers::Temperature_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::optris_drivers::Temperature_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace optris_drivers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'optris_drivers': ['/home/nvidia/snowcar_ws/src/optris_drivers/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::optris_drivers::Temperature_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::optris_drivers::Temperature_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optris_drivers::Temperature_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optris_drivers::Temperature_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optris_drivers::Temperature_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optris_drivers::Temperature_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::optris_drivers::Temperature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4ca2cd25d02107fe9171609096a539e1";
  }

  static const char* value(const ::optris_drivers::Temperature_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4ca2cd25d02107feULL;
  static const uint64_t static_value2 = 0x9171609096a539e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::optris_drivers::Temperature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "optris_drivers/Temperature";
  }

  static const char* value(const ::optris_drivers::Temperature_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::optris_drivers::Temperature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 temperature_flag\n\
float32 temperature_box\n\
float32 temperature_chip\n\
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

  static const char* value(const ::optris_drivers::Temperature_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::optris_drivers::Temperature_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.temperature_flag);
      stream.next(m.temperature_box);
      stream.next(m.temperature_chip);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Temperature_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::optris_drivers::Temperature_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::optris_drivers::Temperature_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "temperature_flag: ";
    Printer<float>::stream(s, indent + "  ", v.temperature_flag);
    s << indent << "temperature_box: ";
    Printer<float>::stream(s, indent + "  ", v.temperature_box);
    s << indent << "temperature_chip: ";
    Printer<float>::stream(s, indent + "  ", v.temperature_chip);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPTRIS_DRIVERS_MESSAGE_TEMPERATURE_H
