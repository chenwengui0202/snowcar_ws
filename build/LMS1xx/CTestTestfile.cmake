# CMake generated Testfile for 
# Source directory: /home/nvidia/snowcar_ws/src/LMS1xx
# Build directory: /home/nvidia/snowcar_ws/build/LMS1xx
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_lms1xx_gtest_test_buffer "/home/nvidia/snowcar_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/nvidia/snowcar_ws/build/test_results/lms1xx/gtest-test_buffer.xml" "--return-code" "/home/nvidia/snowcar_ws/devel/lib/lms1xx/test_buffer --gtest_output=xml:/home/nvidia/snowcar_ws/build/test_results/lms1xx/gtest-test_buffer.xml")
add_test(_ctest_lms1xx_roslaunch-check_launch_LMS1xx.launch "/home/nvidia/snowcar_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/nvidia/snowcar_ws/build/test_results/lms1xx/roslaunch-check_launch_LMS1xx.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/nvidia/snowcar_ws/build/test_results/lms1xx" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/nvidia/snowcar_ws/build/test_results/lms1xx/roslaunch-check_launch_LMS1xx.launch.xml' '/home/nvidia/snowcar_ws/src/LMS1xx/launch/LMS1xx.launch' ")
