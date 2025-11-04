#include "lemlib/chassis/chassis.hpp"
#include "main.h"
#include"lemlib/api.hpp"

void turnToHeadingGS(float theta, int timeout, lemlib::TurnToHeadingParams params = {} ) {
    float error = theta - chassis.getPose().theta;
    float kP;
    float kI;
    float kD;

    if (error == 90) {
        kP = 20;
        kI = 20;
        kD = 50;
    }
    else if (error == 180) {
        kP = 1.85;
        kI = 0.3;
        kD = 12.5;
    }
    else {
       float kP = -0.201667*error + 38.15;
       float kI = 0;
       float kD = 0;
    }
    chassis.angularPID.setGains(kP, kI, kD);
    chassis.turnToHeading(theta,  timeout, params = {});


}

void moveToPointGS() {

}
