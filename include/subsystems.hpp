#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(8);
inline pros::Motor intakecolorsort(-6);
inline pros::Motor mainscoring(-9);
inline pros::Motor intakemainscoring(-10);


// Front Unload Piston
inline ez::Piston doinker('H');

// Front Unload Piston
inline ez::Piston Wing('F');


//Holder
inline ez::Piston holder('G');


// Optical Sensor Port
inline pros::Optical colorSensor(5);

