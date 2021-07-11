## ROS node sample

Create it with the command below.
아래의 커맨드로 생성했습니다.

```cpp
catkin_create_pkg node_sample roscpp
```

### ros init

___

ros::init 메서드의 파라미터입니다.

```cpp
void init(
    const ros::VP_string &remapping_args,   
    const std::__cxx11::string &name,   
    uint32_t options = 0U
)
```

```cpp
void init(
    const ros::M_string &remappings,
    const std::__cxx11::string &name,
    uint32_t options = 0U
)
```

```cpp
void init(
    int &argc, char **argv,
    const std::__cxx11::string &name,
    uint32_t options = 0U
)
```
