// Generated by gencpp from file deepracer_msgs/SetVisualTransparency.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_SETVISUALTRANSPARENCY_H
#define DEEPRACER_MSGS_MESSAGE_SETVISUALTRANSPARENCY_H

#include <ros/service_traits.h>


#include <deepracer_msgs/SetVisualTransparencyRequest.h>
#include <deepracer_msgs/SetVisualTransparencyResponse.h>


namespace deepracer_msgs
{

struct SetVisualTransparency
{

typedef SetVisualTransparencyRequest Request;
typedef SetVisualTransparencyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetVisualTransparency
} // namespace deepracer_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_msgs::SetVisualTransparency > {
  static const char* value()
  {
    return "8d620635331bc4411a9425df4f8058e7";
  }

  static const char* value(const ::deepracer_msgs::SetVisualTransparency&) { return value(); }
};

template<>
struct DataType< ::deepracer_msgs::SetVisualTransparency > {
  static const char* value()
  {
    return "deepracer_msgs/SetVisualTransparency";
  }

  static const char* value(const ::deepracer_msgs::SetVisualTransparency&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_msgs::SetVisualTransparencyRequest> should match
// service_traits::MD5Sum< ::deepracer_msgs::SetVisualTransparency >
template<>
struct MD5Sum< ::deepracer_msgs::SetVisualTransparencyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetVisualTransparency >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualTransparencyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetVisualTransparencyRequest> should match
// service_traits::DataType< ::deepracer_msgs::SetVisualTransparency >
template<>
struct DataType< ::deepracer_msgs::SetVisualTransparencyRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetVisualTransparency >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualTransparencyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_msgs::SetVisualTransparencyResponse> should match
// service_traits::MD5Sum< ::deepracer_msgs::SetVisualTransparency >
template<>
struct MD5Sum< ::deepracer_msgs::SetVisualTransparencyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::SetVisualTransparency >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualTransparencyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::SetVisualTransparencyResponse> should match
// service_traits::DataType< ::deepracer_msgs::SetVisualTransparency >
template<>
struct DataType< ::deepracer_msgs::SetVisualTransparencyResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::SetVisualTransparency >::value();
  }
  static const char* value(const ::deepracer_msgs::SetVisualTransparencyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_SETVISUALTRANSPARENCY_H
