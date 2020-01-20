// Generated by gencpp from file duckietown_msgs/LEDDetection.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_LEDDETECTION_H
#define DUCKIETOWN_MSGS_MESSAGE_LEDDETECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <duckietown_msgs/Vector2D.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct LEDDetection_
{
  typedef LEDDetection_<ContainerAllocator> Type;

  LEDDetection_()
    : timestamp1()
    , timestamp2()
    , pixels_normalized()
    , frequency(0.0)
    , color()
    , confidence(0.0)
    , signal_ts()
    , signal()
    , fft_fs()
    , fft()  {
    }
  LEDDetection_(const ContainerAllocator& _alloc)
    : timestamp1()
    , timestamp2()
    , pixels_normalized(_alloc)
    , frequency(0.0)
    , color(_alloc)
    , confidence(0.0)
    , signal_ts(_alloc)
    , signal(_alloc)
    , fft_fs(_alloc)
    , fft(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp1_type;
  _timestamp1_type timestamp1;

   typedef ros::Time _timestamp2_type;
  _timestamp2_type timestamp2;

   typedef  ::duckietown_msgs::Vector2D_<ContainerAllocator>  _pixels_normalized_type;
  _pixels_normalized_type pixels_normalized;

   typedef float _frequency_type;
  _frequency_type frequency;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _color_type;
  _color_type color;

   typedef float _confidence_type;
  _confidence_type confidence;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _signal_ts_type;
  _signal_ts_type signal_ts;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _signal_type;
  _signal_type signal;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _fft_fs_type;
  _fft_fs_type fft_fs;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _fft_type;
  _fft_type fft;





  typedef boost::shared_ptr< ::duckietown_msgs::LEDDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::LEDDetection_<ContainerAllocator> const> ConstPtr;

}; // struct LEDDetection_

typedef ::duckietown_msgs::LEDDetection_<std::allocator<void> > LEDDetection;

typedef boost::shared_ptr< ::duckietown_msgs::LEDDetection > LEDDetectionPtr;
typedef boost::shared_ptr< ::duckietown_msgs::LEDDetection const> LEDDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::LEDDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/wick/AD-simulator-master/ros/catkin_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDDetection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d1ac8691d7a30e838dc372a724aee94b";
  }

  static const char* value(const ::duckietown_msgs::LEDDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd1ac8691d7a30e83ULL;
  static const uint64_t static_value2 = 0x8dc372a724aee94bULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/LEDDetection";
  }

  static const char* value(const ::duckietown_msgs::LEDDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time timestamp1		# initial timestamp of the camera stream used \n"
"time timestamp2		# final timestamp of the camera stream used \n"
"Vector2D pixels_normalized\n"
"float32 frequency \n"
"string color        # will be ‘r’, ‘g’ or ‘b’ \n"
"float32 confidence  # some value of confidence for the detection (TBD)\n"
"\n"
"# for debug/visualization\n"
"float64[] signal_ts\n"
"float32[] signal\n"
"float32[] fft_fs\n"
"float32[] fft\n"
"\n"
"================================================================================\n"
"MSG: duckietown_msgs/Vector2D\n"
"float32 x\n"
"float32 y\n"
;
  }

  static const char* value(const ::duckietown_msgs::LEDDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp1);
      stream.next(m.timestamp2);
      stream.next(m.pixels_normalized);
      stream.next(m.frequency);
      stream.next(m.color);
      stream.next(m.confidence);
      stream.next(m.signal_ts);
      stream.next(m.signal);
      stream.next(m.fft_fs);
      stream.next(m.fft);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LEDDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::LEDDetection_<ContainerAllocator>& v)
  {
    s << indent << "timestamp1: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp1);
    s << indent << "timestamp2: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp2);
    s << indent << "pixels_normalized: ";
    s << std::endl;
    Printer< ::duckietown_msgs::Vector2D_<ContainerAllocator> >::stream(s, indent + "  ", v.pixels_normalized);
    s << indent << "frequency: ";
    Printer<float>::stream(s, indent + "  ", v.frequency);
    s << indent << "color: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.color);
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
    s << indent << "signal_ts[]" << std::endl;
    for (size_t i = 0; i < v.signal_ts.size(); ++i)
    {
      s << indent << "  signal_ts[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.signal_ts[i]);
    }
    s << indent << "signal[]" << std::endl;
    for (size_t i = 0; i < v.signal.size(); ++i)
    {
      s << indent << "  signal[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.signal[i]);
    }
    s << indent << "fft_fs[]" << std::endl;
    for (size_t i = 0; i < v.fft_fs.size(); ++i)
    {
      s << indent << "  fft_fs[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.fft_fs[i]);
    }
    s << indent << "fft[]" << std::endl;
    for (size_t i = 0; i < v.fft.size(); ++i)
    {
      s << indent << "  fft[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.fft[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_LEDDETECTION_H
