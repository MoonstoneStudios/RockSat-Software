#ifndef IMU_H
#define IMU_H

#include <Arduino.h>
#include <Adafruit_ICM20X.h>
#include <Adafruit_ICM20649.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include "defines.h"

/// @brief The IMU handler.
class IMU 
{

public:
    /// If the IMU is connected or not.
    bool imuConnected = false;
    
    /// The IMU connection handled by Adafruit.
    Adafruit_ICM20649 imu;

    /// The accel data.
    sensors_event_t acceleration;
    /// The gyro data.
    sensors_event_t gyro;
    /// The temp data.
    sensors_event_t temp;
    
    /// Try to connect to the IMU
    /// @param retryDefault 
    /// @return 
    bool connect_to_imu(int retryDefault = 0);
    void configure_imu();
    void imu_loop();
    
};

#endif