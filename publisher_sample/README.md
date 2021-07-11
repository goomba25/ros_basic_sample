## ROS publisher sample

Create it with the command below.   
아래의 커맨드로 생성했습니다.

```cpp
catkin_create_pkg publisher_sample roscpp std_msgs 
```

publish

```cpp
ros::Publisher advertise(ros::AdvertiseOptions &ops)
```

```cpp
ros::Publisher advertise<M>(
    const std::__cxx11::string &topic,
    uint32_t queue_size,
    bool latch = false)
```

```cpp
ros::Publisher advertise<M>(
    const std::__cxx11::string &topic,
    uint32_t queue_size,
    const ros::SubscriberStatusCallback &connect_cb,
    const ros::SubscriberStatusCallback &disconnect_cb = ros::SubscriberStatusCallback(),
    const ros::VoidConstPtr &tracked_object = ros::VoidConstPtr(),
    bool latch = false)
```

```cpp
advertise<type>(topic, queue size);
```

```cpp
ros::Publisher pub = nh.advertise<std_msgs::String>("publisher topic", 1000);
```