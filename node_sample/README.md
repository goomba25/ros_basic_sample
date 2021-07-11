## ROS node sample

Create it with the command below.

```cpp
catkin_create_pkg node_sample roscpp
```

## ros init

```
void init(
    const ros::VP_string &remapping_args,   
    const std::__cxx11::string &name,   
    uint32_t options = 0U
)
```

```
void init(
    const ros::M_string &remappings,
    const std::__cxx11::string &name,
    uint32_t options = 0U
)
```

```
void init(
    int &argc, char **argv,
    const std::__cxx11::string &name,
    uint32_t options = 0U
)
```