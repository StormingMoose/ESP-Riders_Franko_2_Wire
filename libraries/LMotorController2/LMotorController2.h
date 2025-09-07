#ifndef LMotorController2_h
#define LMotorController2_h


#include "Arduino.h"


class LMotorController2
{
protected:
    int _ena, _in1,  _enb, _in3;
    int _currentSpeed;
    double _motorAConst, _motorBConst;
public:
    LMotorController2(int ena, int in1,  int enb, int in3,  double motorAConst, double motorBConst);
    void move(int leftSpeed, int rightSpeed, int minAbsSpeed);
    void move(int speed);
    void move(int speed, int minAbsSpeed);
    void turnLeft(int speed, bool kick);
    void turnRight(int speed, bool kick);
    void stopMoving();
};


#endif