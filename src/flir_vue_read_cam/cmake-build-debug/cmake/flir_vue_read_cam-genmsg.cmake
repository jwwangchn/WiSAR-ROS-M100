# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "flir_vue_read_cam: 1 messages, 0 services")

set(MSG_I_FLAGS "-Iflir_vue_read_cam:/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(flir_vue_read_cam_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg/proposal_roi_msg.msg" NAME_WE)
add_custom_target(_flir_vue_read_cam_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "flir_vue_read_cam" "/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg/proposal_roi_msg.msg" "std_msgs/Header"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(flir_vue_read_cam
  "/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg/proposal_roi_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/flir_vue_read_cam
)

### Generating Services

### Generating Module File
_generate_module_cpp(flir_vue_read_cam
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/flir_vue_read_cam
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(flir_vue_read_cam_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(flir_vue_read_cam_generate_messages flir_vue_read_cam_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg/proposal_roi_msg.msg" NAME_WE)
add_dependencies(flir_vue_read_cam_generate_messages_cpp _flir_vue_read_cam_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(flir_vue_read_cam_gencpp)
add_dependencies(flir_vue_read_cam_gencpp flir_vue_read_cam_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS flir_vue_read_cam_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(flir_vue_read_cam
  "/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg/proposal_roi_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/flir_vue_read_cam
)

### Generating Services

### Generating Module File
_generate_module_lisp(flir_vue_read_cam
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/flir_vue_read_cam
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(flir_vue_read_cam_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(flir_vue_read_cam_generate_messages flir_vue_read_cam_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg/proposal_roi_msg.msg" NAME_WE)
add_dependencies(flir_vue_read_cam_generate_messages_lisp _flir_vue_read_cam_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(flir_vue_read_cam_genlisp)
add_dependencies(flir_vue_read_cam_genlisp flir_vue_read_cam_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS flir_vue_read_cam_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(flir_vue_read_cam
  "/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg/proposal_roi_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/flir_vue_read_cam
)

### Generating Services

### Generating Module File
_generate_module_py(flir_vue_read_cam
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/flir_vue_read_cam
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(flir_vue_read_cam_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(flir_vue_read_cam_generate_messages flir_vue_read_cam_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/kelfor/Documents/flir-vue-pro/src/flir_vue_read_cam/msg/proposal_roi_msg.msg" NAME_WE)
add_dependencies(flir_vue_read_cam_generate_messages_py _flir_vue_read_cam_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(flir_vue_read_cam_genpy)
add_dependencies(flir_vue_read_cam_genpy flir_vue_read_cam_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS flir_vue_read_cam_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/flir_vue_read_cam)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/flir_vue_read_cam
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(flir_vue_read_cam_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/flir_vue_read_cam)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/flir_vue_read_cam
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(flir_vue_read_cam_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/flir_vue_read_cam)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/flir_vue_read_cam\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/flir_vue_read_cam
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(flir_vue_read_cam_generate_messages_py std_msgs_generate_messages_py)
