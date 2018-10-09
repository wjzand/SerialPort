CMAKE_MINIMUM_REQUIRED(VERSION 3.4.1)

INCLUDE_DIRECTORIES(src/main/cpp/SerialPort.h)

ADD_LIBRARY(serial_port SHARED src/main/cpp/SerialPort.c)

TARGET_LINK_LIBRARIES(serial_port log)