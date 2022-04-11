# Unit Testing

Cloned from the `${ZEPHYR_BASE}/samples/hello_world` example

# Steps

## lib/foo

- Used to see how `ztest` unit tests works

## lib/bar

- Used to see how `fff` mocking works
- Since each script is run locally (inside its own test directory) we need to pass in **extra arguments** to `twister` to know the **current project directory**

In `bar/test/CMakeLists.txt` we add 

```cmake
include(${CURRENT_PROJECT_DIR}/scripts/cmake/unittest.cmake)
add_mock_from(${CMAKE_CURRENT_SOURCE_DIR}/../../foo)
```

See `run_twister.py` for how the `CURRENT_PROJECT_DIR` is passed

- The `add_mock_from` CMake function adds the `${mock_dir}/include` and `${mock_dir}/mock` folder to the generated `testbinary` executable
