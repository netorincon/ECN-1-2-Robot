// Generated by gencpp from file sbg_driver/SbgGpsVel.msg
// DO NOT EDIT!


#ifndef SBG_DRIVER_MESSAGE_SBGGPSVEL_H
#define SBG_DRIVER_MESSAGE_SBGGPSVEL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sbg_driver/SbgGpsVelStatus.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace sbg_driver
{
template <class ContainerAllocator>
struct SbgGpsVel_
{
  typedef SbgGpsVel_<ContainerAllocator> Type;

  SbgGpsVel_()
    : header()
    , time_stamp(0)
    , status()
    , gps_tow(0)
    , velocity()
    , velocity_accuracy()
    , course(0.0)
    , course_acc(0.0)  {
    }
  SbgGpsVel_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time_stamp(0)
    , status(_alloc)
    , gps_tow(0)
    , velocity(_alloc)
    , velocity_accuracy(_alloc)
    , course(0.0)
    , course_acc(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _time_stamp_type;
  _time_stamp_type time_stamp;

   typedef  ::sbg_driver::SbgGpsVelStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef uint32_t _gps_tow_type;
  _gps_tow_type gps_tow;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_accuracy_type;
  _velocity_accuracy_type velocity_accuracy;

   typedef float _course_type;
  _course_type course;

   typedef float _course_acc_type;
  _course_acc_type course_acc;





  typedef boost::shared_ptr< ::sbg_driver::SbgGpsVel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sbg_driver::SbgGpsVel_<ContainerAllocator> const> ConstPtr;

}; // struct SbgGpsVel_

typedef ::sbg_driver::SbgGpsVel_<std::allocator<void> > SbgGpsVel;

typedef boost::shared_ptr< ::sbg_driver::SbgGpsVel > SbgGpsVelPtr;
typedef boost::shared_ptr< ::sbg_driver::SbgGpsVel const> SbgGpsVelConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sbg_driver::SbgGpsVel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sbg_driver::SbgGpsVel_<ContainerAllocator1> & lhs, const ::sbg_driver::SbgGpsVel_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.time_stamp == rhs.time_stamp &&
    lhs.status == rhs.status &&
    lhs.gps_tow == rhs.gps_tow &&
    lhs.velocity == rhs.velocity &&
    lhs.velocity_accuracy == rhs.velocity_accuracy &&
    lhs.course == rhs.course &&
    lhs.course_acc == rhs.course_acc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sbg_driver::SbgGpsVel_<ContainerAllocator1> & lhs, const ::sbg_driver::SbgGpsVel_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sbg_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sbg_driver::SbgGpsVel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sbg_driver::SbgGpsVel_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbg_driver::SbgGpsVel_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc36a4705c96041ace5f0875af58a725";
  }

  static const char* value(const ::sbg_driver::SbgGpsVel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc36a4705c96041aULL;
  static const uint64_t static_value2 = 0xce5f0875af58a725ULL;
};

template<class ContainerAllocator>
struct DataType< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sbg_driver/SbgGpsVel";
  }

  static const char* value(const ::sbg_driver::SbgGpsVel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# SBG Ellipse Messages\n"
"Header header\n"
"\n"
"#  Time since sensor is powered up [us]\n"
"uint32 time_stamp\n"
"\n"
"# GPS velocity fix and status bitmask\n"
"SbgGpsVelStatus status\n"
"\n"
"# GPS Time of Week [ms]\n"
"uint32 gps_tow\n"
"\n"
"# Velocity [m/s]\n"
"# In NED convention:\n"
"#   X: North\n"
"#   Y: East\n"
"#   Z: Down\n"
"# In ENU convention:\n"
"#   X: East\n"
"#   Y: North\n"
"#   Z: Up\n"
"geometry_msgs/Vector3 velocity\n"
"\n"
"# Velocity accuracy (1 sigma) [m/s]\n"
"# In NED convention:\n"
"#   X: North\n"
"#   Y: East\n"
"#   Z: Vertical\n"
"# In ENU convention:\n"
"#   X: East\n"
"#   Y: North\n"
"#   Z: Vertical\n"
"geometry_msgs/Vector3 velocity_accuracy\n"
"\n"
"# True direction of motion over ground (0 to 360 deg)\n"
"# NED convention: Zero when the X axis is pointing North.\n"
"# ENU convention: Zero when the X axis is pointing East. (opposite sign compared to NED)\n"
"float32 course\n"
"\n"
"# 1 sgima course accuracy\n"
"float32 course_acc\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: sbg_driver/SbgGpsVelStatus\n"
"# SBG Ellipse Messages\n"
"# Submessage\n"
"\n"
"# The raw GPS velocity status\n"
"# 0 SOL_COMPUTED		A valid solution has been computed.\n"
"# 1 INSUFFICIENT_OBS	Not enough valid SV to compute a solution.\n"
"# 2 INTERNAL_ERROR		An internal error has occurred.\n"
"# 3 LIMIT				Velocity limit exceeded.\n"
"uint8 vel_status\n"
"\n"
"# The raw GPS velocity type\n"
"# 0 VEL_NO_SOLUTION		No valid velocity solution available.\n"
"# 1 VEL_UNKNOWN_TYPE	An unknown solution type has been computed.\n"
"# 2 VEL_DOPPLER			A Doppler velocity has been computed.\n"
"# 3 VEL_DIFFERENTIAL	A velocity has been computed between two positions.\n"
"uint8 vel_type\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::sbg_driver::SbgGpsVel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time_stamp);
      stream.next(m.status);
      stream.next(m.gps_tow);
      stream.next(m.velocity);
      stream.next(m.velocity_accuracy);
      stream.next(m.course);
      stream.next(m.course_acc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SbgGpsVel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sbg_driver::SbgGpsVel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sbg_driver::SbgGpsVel_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time_stamp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time_stamp);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::sbg_driver::SbgGpsVelStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "gps_tow: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_tow);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "velocity_accuracy: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity_accuracy);
    s << indent << "course: ";
    Printer<float>::stream(s, indent + "  ", v.course);
    s << indent << "course_acc: ";
    Printer<float>::stream(s, indent + "  ", v.course_acc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SBG_DRIVER_MESSAGE_SBGGPSVEL_H