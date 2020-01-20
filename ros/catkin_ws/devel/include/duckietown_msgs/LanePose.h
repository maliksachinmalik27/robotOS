// Generated by gencpp from file duckietown_msgs/LanePose.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_LANEPOSE_H
#define DUCKIETOWN_MSGS_MESSAGE_LANEPOSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct LanePose_
{
  typedef LanePose_<ContainerAllocator> Type;

  LanePose_()
    : header()
    , d(0.0)
    , sigma_d(0.0)
    , phi(0.0)
    , sigma_phi(0.0)
    , status(0)
    , in_lane(false)  {
    }
  LanePose_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , d(0.0)
    , sigma_d(0.0)
    , phi(0.0)
    , sigma_phi(0.0)
    , status(0)
    , in_lane(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _d_type;
  _d_type d;

   typedef float _sigma_d_type;
  _sigma_d_type sigma_d;

   typedef float _phi_type;
  _phi_type phi;

   typedef float _sigma_phi_type;
  _sigma_phi_type sigma_phi;

   typedef int32_t _status_type;
  _status_type status;

   typedef uint8_t _in_lane_type;
  _in_lane_type in_lane;



  enum {
    NORMAL = 0,
    ERROR = 1,
  };


  typedef boost::shared_ptr< ::duckietown_msgs::LanePose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::LanePose_<ContainerAllocator> const> ConstPtr;

}; // struct LanePose_

typedef ::duckietown_msgs::LanePose_<std::allocator<void> > LanePose;

typedef boost::shared_ptr< ::duckietown_msgs::LanePose > LanePosePtr;
typedef boost::shared_ptr< ::duckietown_msgs::LanePose const> LanePoseConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::LanePose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::LanePose_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LanePose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LanePose_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LanePose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LanePose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LanePose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LanePose_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::LanePose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "248b875aed9afcb389413014f9465bf7";
  }

  static const char* value(const ::duckietown_msgs::LanePose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x248b875aed9afcb3ULL;
  static const uint64_t static_value2 = 0x89413014f9465bf7ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::LanePose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/LanePose";
  }

  static const char* value(const ::duckietown_msgs::LanePose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::LanePose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 d   #lateral offset\n"
"float32 sigma_d\n"
"float32 phi #heading error\n"
"float32 sigma_phi\n"
"int32 status\n"
"bool in_lane\n"
"#Enum for status\n"
"int32 NORMAL=0\n"
"int32 ERROR=1 \n"
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
;
  }

  static const char* value(const ::duckietown_msgs::LanePose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::LanePose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.d);
      stream.next(m.sigma_d);
      stream.next(m.phi);
      stream.next(m.sigma_phi);
      stream.next(m.status);
      stream.next(m.in_lane);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LanePose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::LanePose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::LanePose_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "d: ";
    Printer<float>::stream(s, indent + "  ", v.d);
    s << indent << "sigma_d: ";
    Printer<float>::stream(s, indent + "  ", v.sigma_d);
    s << indent << "phi: ";
    Printer<float>::stream(s, indent + "  ", v.phi);
    s << indent << "sigma_phi: ";
    Printer<float>::stream(s, indent + "  ", v.sigma_phi);
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
    s << indent << "in_lane: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_lane);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_LANEPOSE_H
