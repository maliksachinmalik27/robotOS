// Generated by gencpp from file duckietown_msgs/Trajectory.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_TRAJECTORY_H
#define DUCKIETOWN_MSGS_MESSAGE_TRAJECTORY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3Stamped.h>
#include <geometry_msgs/Vector3Stamped.h>
#include <geometry_msgs/Vector3Stamped.h>
#include <geometry_msgs/Vector3Stamped.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct Trajectory_
{
  typedef Trajectory_<ContainerAllocator> Type;

  Trajectory_()
    : header()
    , pos()
    , vel()
    , acc()
    , jerk()  {
    }
  Trajectory_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pos(_alloc)
    , vel(_alloc)
    , acc(_alloc)
    , jerk(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::other >  _pos_type;
  _pos_type pos;

   typedef std::vector< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::other >  _vel_type;
  _vel_type vel;

   typedef std::vector< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::other >  _acc_type;
  _acc_type acc;

   typedef std::vector< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::other >  _jerk_type;
  _jerk_type jerk;





  typedef boost::shared_ptr< ::duckietown_msgs::Trajectory_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::Trajectory_<ContainerAllocator> const> ConstPtr;

}; // struct Trajectory_

typedef ::duckietown_msgs::Trajectory_<std::allocator<void> > Trajectory;

typedef boost::shared_ptr< ::duckietown_msgs::Trajectory > TrajectoryPtr;
typedef boost::shared_ptr< ::duckietown_msgs::Trajectory const> TrajectoryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::Trajectory_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::Trajectory_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::duckietown_msgs::Trajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Trajectory_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Trajectory_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Trajectory_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a5c4bf7a2bfb37b947e3dfa585ede51";
  }

  static const char* value(const ::duckietown_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a5c4bf7a2bfb37bULL;
  static const uint64_t static_value2 = 0x947e3dfa585ede51ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/Trajectory";
  }

  static const char* value(const ::duckietown_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"geometry_msgs/Vector3Stamped[] pos\n"
"geometry_msgs/Vector3Stamped[] vel\n"
"geometry_msgs/Vector3Stamped[] acc\n"
"geometry_msgs/Vector3Stamped[] jerk\n"
"\n"
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
"MSG: geometry_msgs/Vector3Stamped\n"
"# This represents a Vector3 with reference coordinate frame and timestamp\n"
"Header header\n"
"Vector3 vector\n"
"\n"
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

  static const char* value(const ::duckietown_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::Trajectory_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pos);
      stream.next(m.vel);
      stream.next(m.acc);
      stream.next(m.jerk);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Trajectory_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::Trajectory_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::Trajectory_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pos[]" << std::endl;
    for (size_t i = 0; i < v.pos.size(); ++i)
    {
      s << indent << "  pos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::stream(s, indent + "    ", v.pos[i]);
    }
    s << indent << "vel[]" << std::endl;
    for (size_t i = 0; i < v.vel.size(); ++i)
    {
      s << indent << "  vel[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::stream(s, indent + "    ", v.vel[i]);
    }
    s << indent << "acc[]" << std::endl;
    for (size_t i = 0; i < v.acc.size(); ++i)
    {
      s << indent << "  acc[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::stream(s, indent + "    ", v.acc[i]);
    }
    s << indent << "jerk[]" << std::endl;
    for (size_t i = 0; i < v.jerk.size(); ++i)
    {
      s << indent << "  jerk[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::stream(s, indent + "    ", v.jerk[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_TRAJECTORY_H
