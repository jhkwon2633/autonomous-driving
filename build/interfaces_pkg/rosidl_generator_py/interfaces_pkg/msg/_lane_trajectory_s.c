// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces_pkg:msg/LaneTrajectory.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces_pkg/msg/detail/lane_trajectory__struct.h"
#include "interfaces_pkg/msg/detail/lane_trajectory__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces_pkg__msg__lane_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interfaces_pkg.msg._lane_trajectory.LaneTrajectory", full_classname_dest, 50) == 0);
  }
  interfaces_pkg__msg__LaneTrajectory * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b
    PyObject * field = PyObject_GetAttrString(_pymsg, "b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c
    PyObject * field = PyObject_GetAttrString(_pymsg, "c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_min_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_min_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_min_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_max_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_max_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_max_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fit_error_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "fit_error_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fit_error_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_points");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_points = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces_pkg__msg__lane_trajectory__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneTrajectory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_pkg.msg._lane_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneTrajectory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_pkg__msg__LaneTrajectory * ros_message = (interfaces_pkg__msg__LaneTrajectory *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_min_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_min_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_min_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_max_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_max_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_max_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fit_error_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fit_error_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fit_error_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_points
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_points);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
