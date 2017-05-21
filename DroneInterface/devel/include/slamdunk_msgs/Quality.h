// Generated by gencpp from file slamdunk_msgs/Quality.msg
// DO NOT EDIT!


#ifndef SLAMDUNK_MSGS_MESSAGE_QUALITY_H
#define SLAMDUNK_MSGS_MESSAGE_QUALITY_H


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
struct Quality_
{
  typedef Quality_<ContainerAllocator> Type;

  Quality_()
    : value(0)  {
    }
  Quality_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;


    enum { UNKNOWN = 0u };
     enum { GOOD = 1u };
     enum { HAZARDOUS = 2u };
     enum { BAD = 3u };
     enum { LOST = 4u };
 

  typedef boost::shared_ptr< ::slamdunk_msgs::Quality_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slamdunk_msgs::Quality_<ContainerAllocator> const> ConstPtr;

}; // struct Quality_

typedef ::slamdunk_msgs::Quality_<std::allocator<void> > Quality;

typedef boost::shared_ptr< ::slamdunk_msgs::Quality > QualityPtr;
typedef boost::shared_ptr< ::slamdunk_msgs::Quality const> QualityConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slamdunk_msgs::Quality_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slamdunk_msgs::Quality_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::slamdunk_msgs::Quality_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamdunk_msgs::Quality_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamdunk_msgs::Quality_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamdunk_msgs::Quality_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamdunk_msgs::Quality_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamdunk_msgs::Quality_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slamdunk_msgs::Quality_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4021ec07717d2e06601ff253a61981b1";
  }

  static const char* value(const ::slamdunk_msgs::Quality_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4021ec07717d2e06ULL;
  static const uint64_t static_value2 = 0x601ff253a61981b1ULL;
};

template<class ContainerAllocator>
struct DataType< ::slamdunk_msgs::Quality_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slamdunk_msgs/Quality";
  }

  static const char* value(const ::slamdunk_msgs::Quality_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slamdunk_msgs::Quality_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 value\n\
uint8 UNKNOWN = 0\n\
uint8 GOOD = 1\n\
uint8 HAZARDOUS = 2\n\
uint8 BAD = 3\n\
uint8 LOST = 4\n\
";
  }

  static const char* value(const ::slamdunk_msgs::Quality_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slamdunk_msgs::Quality_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Quality_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slamdunk_msgs::Quality_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slamdunk_msgs::Quality_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAMDUNK_MSGS_MESSAGE_QUALITY_H
