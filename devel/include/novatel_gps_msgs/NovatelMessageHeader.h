// Generated by gencpp from file novatel_gps_msgs/NovatelMessageHeader.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_NOVATELMESSAGEHEADER_H
#define NOVATEL_GPS_MSGS_MESSAGE_NOVATELMESSAGEHEADER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <novatel_gps_msgs/NovatelReceiverStatus.h>

namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct NovatelMessageHeader_
{
  typedef NovatelMessageHeader_<ContainerAllocator> Type;

  NovatelMessageHeader_()
    : message_name()
    , port()
    , sequence_num(0)
    , percent_idle_time(0.0)
    , gps_time_status()
    , gps_week_num(0)
    , gps_seconds(0.0)
    , receiver_status()
    , receiver_software_version(0)  {
    }
  NovatelMessageHeader_(const ContainerAllocator& _alloc)
    : message_name(_alloc)
    , port(_alloc)
    , sequence_num(0)
    , percent_idle_time(0.0)
    , gps_time_status(_alloc)
    , gps_week_num(0)
    , gps_seconds(0.0)
    , receiver_status(_alloc)
    , receiver_software_version(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_name_type;
  _message_name_type message_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _port_type;
  _port_type port;

   typedef uint32_t _sequence_num_type;
  _sequence_num_type sequence_num;

   typedef float _percent_idle_time_type;
  _percent_idle_time_type percent_idle_time;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _gps_time_status_type;
  _gps_time_status_type gps_time_status;

   typedef uint32_t _gps_week_num_type;
  _gps_week_num_type gps_week_num;

   typedef double _gps_seconds_type;
  _gps_seconds_type gps_seconds;

   typedef  ::novatel_gps_msgs::NovatelReceiverStatus_<ContainerAllocator>  _receiver_status_type;
  _receiver_status_type receiver_status;

   typedef uint32_t _receiver_software_version_type;
  _receiver_software_version_type receiver_software_version;





  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> const> ConstPtr;

}; // struct NovatelMessageHeader_

typedef ::novatel_gps_msgs::NovatelMessageHeader_<std::allocator<void> > NovatelMessageHeader;

typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelMessageHeader > NovatelMessageHeaderPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelMessageHeader const> NovatelMessageHeaderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'novatel_gps_msgs': ['/home/nvidia/snowcar_ws/src/novatel_gps_driver/novatel_gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "43b536606c527a56309297282bb7adef";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x43b536606c527a56ULL;
  static const uint64_t static_value2 = 0x309297282bb7adefULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/NovatelMessageHeader";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Novatel Message Header\n\
\n\
string message_name\n\
string port\n\
uint32 sequence_num\n\
float32 percent_idle_time\n\
string gps_time_status\n\
uint32 gps_week_num\n\
float64 gps_seconds\n\
\n\
# Bit       Mask      Description\n\
#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)\n\
#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)\n\
#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)\n\
#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)\n\
#  4     0x00000010   <Reserved>\n\
#  5     0x00000020   Antenna open flag (0: OK, 1: Open)\n\
#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)\n\
#  7     0x00000080   CPU overload flag\n\
#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)\n\
#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)\n\
#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)\n\
#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)\n\
#  12    0x00001000   <Reserved>\n\
#  13    0x00002000   <Reserved>\n\
#  14    0x00004000   <Reserved>\n\
#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)\n\
#  16    0x00010000   <Reserverd>\n\
#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)\n\
#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)\n\
#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)\n\
#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)\n\
#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)\n\
#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)\n\
#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)\n\
#  24    0x01000000   Software resource (0: OK, 1: Warning)\n\
#  25    0x02000000   <Reserved>\n\
#  26    0x04000000   <Reserved>\n\
#  27    0x08000000   <Reserved>\n\
#  28    0x10000000   <Reserved>\n\
#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)\n\
#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)\n\
#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)\n\
NovatelReceiverStatus receiver_status\n\
\n\
# Receiver build number (0-65535)\n\
uint32 receiver_software_version\n\
================================================================================\n\
MSG: novatel_gps_msgs/NovatelReceiverStatus\n\
# From the original Novatel receiver status message bitfield\n\
#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)\n\
#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)\n\
#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)\n\
#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)\n\
#  4     0x00000010   <Reserved>\n\
#  5     0x00000020   Antenna open flag (0: OK, 1: Open)\n\
#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)\n\
#  7     0x00000080   CPU overload flag\n\
#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)\n\
#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)\n\
#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)\n\
#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)\n\
#  12    0x00001000   <Reserved>\n\
#  13    0x00002000   <Reserved>\n\
#  14    0x00004000   <Reserved>\n\
#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)\n\
#  16    0x00010000   <Reserverd>\n\
#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)\n\
#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)\n\
#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)\n\
#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)\n\
#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)\n\
#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)\n\
#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)\n\
#  24    0x01000000   Software resource (0: OK, 1: Warning)\n\
#  25    0x02000000   <Reserved>\n\
#  26    0x04000000   <Reserved>\n\
#  27    0x08000000   <Reserved>\n\
#  28    0x10000000   <Reserved>\n\
#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)\n\
#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)\n\
#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)\n\
uint32 original_status_code\n\
bool error_flag\n\
bool temperature_flag\n\
bool voltage_supply_flag\n\
bool antenna_powered\n\
bool antenna_is_open\n\
bool antenna_is_shorted\n\
bool cpu_overload_flag\n\
bool com1_buffer_overrun\n\
bool com2_buffer_overrun\n\
bool com3_buffer_overrun\n\
bool usb_buffer_overrun\n\
bool rf1_agc_flag\n\
bool rf2_agc_flag\n\
bool almanac_flag\n\
bool position_solution_flag\n\
bool position_fixed_flag\n\
bool clock_steering_status_enabled\n\
bool clock_model_flag\n\
bool oemv_external_oscillator_flag\n\
bool software_resource_flag\n\
bool aux1_status_event_flag\n\
bool aux2_status_event_flag\n\
bool aux3_status_event_flag\n\
\n\
";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.message_name);
      stream.next(m.port);
      stream.next(m.sequence_num);
      stream.next(m.percent_idle_time);
      stream.next(m.gps_time_status);
      stream.next(m.gps_week_num);
      stream.next(m.gps_seconds);
      stream.next(m.receiver_status);
      stream.next(m.receiver_software_version);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NovatelMessageHeader_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator>& v)
  {
    s << indent << "message_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message_name);
    s << indent << "port: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.port);
    s << indent << "sequence_num: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sequence_num);
    s << indent << "percent_idle_time: ";
    Printer<float>::stream(s, indent + "  ", v.percent_idle_time);
    s << indent << "gps_time_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.gps_time_status);
    s << indent << "gps_week_num: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_week_num);
    s << indent << "gps_seconds: ";
    Printer<double>::stream(s, indent + "  ", v.gps_seconds);
    s << indent << "receiver_status: ";
    s << std::endl;
    Printer< ::novatel_gps_msgs::NovatelReceiverStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.receiver_status);
    s << indent << "receiver_software_version: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.receiver_software_version);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_NOVATELMESSAGEHEADER_H
