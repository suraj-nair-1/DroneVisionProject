// Generated by gencpp from file slamdunk_msgs/VideoSources.msg
// DO NOT EDIT!


#ifndef SLAMDUNK_MSGS_MESSAGE_VIDEOSOURCES_H
#define SLAMDUNK_MSGS_MESSAGE_VIDEOSOURCES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace slamdunk_msgs
{
template <class ContainerAllocator>
struct VideoSources_
{
  typedef VideoSources_<ContainerAllocator> Type;

  VideoSources_()
    {
    }
  VideoSources_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }




    enum { SOURCE_MIN = 0 };
     enum { SOURCE_LIVE = 0 };
     enum { SOURCE_VDEC_SW = 1 };
     enum { SOURCE_VDEC_HW = 2 };
     enum { SOURCE_MAX = 2 };
 

  typedef boost::shared_ptr< ::slamdunk_msgs::VideoSources_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slamdunk_msgs::VideoSources_<ContainerAllocator> const> ConstPtr;

}; // struct VideoSources_

typedef ::slamdunk_msgs::VideoSources_<std::allocator<void> > VideoSources;

typedef boost::shared_ptr< ::slamdunk_msgs::VideoSources > VideoSourcesPtr;
typedef boost::shared_ptr< ::slamdunk_msgs::VideoSources const> VideoSourcesConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slamdunk_msgs::VideoSources_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace slamdunk_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'slamdunk_msgs': ['/home/me132/DroneVisionProject/DroneInterface/src/slamdunk_ros/slamdunk_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamdunk_msgs::VideoSources_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamdunk_msgs::VideoSources_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamdunk_msgs::VideoSources_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >
{
  static const char* value()
  {
    return "47761778812ba2726a391fe9c5ce06c1";
  }

  static const char* value(const ::slamdunk_msgs::VideoSources_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x47761778812ba272ULL;
  static const uint64_t static_value2 = 0x6a391fe9c5ce06c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slamdunk_msgs/VideoSources";
  }

  static const char* value(const ::slamdunk_msgs::VideoSources_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# available video Sources\n\
\n\
byte SOURCE_MIN = 0\n\
\n\
byte SOURCE_LIVE = 0\n\
byte SOURCE_VDEC_SW = 1\n\
byte SOURCE_VDEC_HW = 2\n\
\n\
byte SOURCE_MAX = 2\n\
";
  }

  static const char* value(const ::slamdunk_msgs::VideoSources_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VideoSources_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slamdunk_msgs::VideoSources_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::slamdunk_msgs::VideoSources_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SLAMDUNK_MSGS_MESSAGE_VIDEOSOURCES_H
