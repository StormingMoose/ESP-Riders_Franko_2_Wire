Franko   - adapted to use 2 wire motor drivers like A4905 or L9110s instead of the three wire L298 motor driver.
======

Arduino Self balancing robot  using ESO32 C3

Note: SDA and SCL default pins did not work for me so I used wire.begin(20,21) instead and interrupt on 10.

Repo structure
--------------
* Franko/Franko.ino: Arduino sketch
* Libraries/*: Libraries should be copied to local Arduino libraries folder

New Components used
--------------------
ESP32 C3
MPU6050
A4950 Motor Driver
2 X 6 volt N20 DC motors
Meccano parts for Robot.
6.7 volt meccanoid battery for motors.
5 volt battery pack for ESO32.

Original Components
----------
* Arduino UNO
* 6 DOF MPU6050 (GY521) (Accel + Gyro)
* L298N Motor Driver
* 2 x 12V 122rpm DC motors + 80mm wheels
* 3 potentiometers for PID tunings

Photo
-----

[![](https://dl.dropboxusercontent.com/u/18883987/Franko.jpg)](https://dl.dropboxusercontent.com/u/18883987/Franko.jpg)
