#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(8);
inline pros::Motor intakecolorsort(-6);
inline pros::Motor intake1(-9);
inline pros::Motor intake3(-10);

inline ez::Piston doinker('H');

inline pros::Optical colorSensor(5);

