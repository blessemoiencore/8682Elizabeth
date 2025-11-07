#include "lemlib/chassis/chassis.hpp"
#include "lemlib/chassis/trackingWheel.hpp"
#include "pros/adi.hpp"
#include "pros/distance.hpp"
#include "pros/misc.hpp"
#include "pros/motor_group.hpp"
#include "pros/motors.hpp"
#include "pros/rotation.hpp"
using namespace pros;



extern Controller remote;
extern MotorGroup left_motors;
extern MotorGroup right_motors;
extern lemlib::Drivetrain drivetrain;
//extern lemlib::TrackingWheel horizontal_tracking_wheel;
extern lemlib::OdomSensors sensors;
extern lemlib::ControllerSettings lateral_controller;
extern lemlib::ControllerSettings angular_controller;
extern lemlib::Chassis chassis;

//motors
extern Motor intake;
extern Motor hood;


//sensors
extern Rotation lb_rotation;
extern Distance dist1;
extern Imu imu1;
extern Rotation horizontal_rotation;
extern Rotation vertical_rotation;

//pneumatics
extern adi::Pneumatics descore;
extern adi::Pneumatics tongue;


//extern void move_lift(float angle);
//extern void lift_control(float angle);

