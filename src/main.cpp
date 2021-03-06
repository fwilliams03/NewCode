// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Claw                 motor         14              
// LeftLift             motor         11              
// RightLift            motor         12              
// Conveyor             motor         20              
// FrontLeftBase        motor         3               
// BackLeftBase         motor         2               
// FrontRightBase       motor         1               
// BackRightBase        motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Claw                 motor         15              
// LeftLift             motor         11              
// RightLift            motor         12              
// Conveyor             motor         20              
// FrontLeftBase        motor         3               
// BackLeftBase         motor         2               
// FrontRightBase       motor         1               
// BackRightBase        motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  
  //making changes :)
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
  LeftLift.setStopping(coast);
  RightLift.setStopping(coast);

}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  //skills
  /*

Conveyor.spin(forward, 100, velocityUnits::pct); //grab goal  
 vex::task::sleep(270);
 Conveyor.stop(hold);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, .95, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, .95, rotationUnits::rev, 35,velocityUnits::pct);    //drive forward
 BackRightBase.startRotateFor(directionType::fwd, .95, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, .95, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 1, rotationUnits::rev, 35,velocityUnits::pct);    //turn right
 BackRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 1, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 Claw.spin(directionType::rev,100, velocityUnits::pct);
 vex::task::sleep(300);         //open claw
 Claw.stop();
 vex::task::sleep(400);
 FrontRightBase.startRotateFor(directionType::fwd, 2.75, rotationUnits::rev, 45,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 2.75, rotationUnits::rev, 45,velocityUnits::pct);    //drive forward and grab neutral
 BackRightBase.startRotateFor(directionType::fwd, 2.75, rotationUnits::rev, 45, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 2.75, rotationUnits::rev, 45,velocityUnits::pct);
 Claw.spin(directionType::fwd,100, velocityUnits::pct);
 vex::task::sleep(500);       //clamp on neutral
 Claw.stop(hold);
 vex::task::sleep(500);
 LeftLift.startRotateFor(directionType::fwd, 1, rotationUnits::rev);
 RightLift.startRotateFor(directionType::fwd, 1, rotationUnits::rev); //lift up
 vex::task::sleep(800);
 FrontRightBase.startRotateFor(directionType::rev, .22, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, .22, rotationUnits::rev, 35,velocityUnits::pct);    //turn right
 BackRightBase.startRotateFor(directionType::rev, .22, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, .22, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 LeftLift.startRotateFor(directionType::fwd, 1.5, rotationUnits::rev);  //continue lifting up
 RightLift.startRotateFor(directionType::fwd, 1.5, rotationUnits::rev);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 3.4, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 3.4, rotationUnits::rev, 40,velocityUnits::pct);    //drive forward
 BackRightBase.startRotateFor(directionType::fwd, 3.4, rotationUnits::rev, 40, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 3.4, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, .13, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, .13, rotationUnits::rev, 35,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::fwd, .13, rotationUnits::rev, 35, velocityUnits::pct); //little to the left
 BackLeftBase.rotateFor(directionType::rev, .13, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 1.1, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 1.1, rotationUnits::rev, 35,velocityUnits::pct);    //drive forward
 BackRightBase.startRotateFor(directionType::fwd, 1.1, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 1.1, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 LeftLift.startRotateFor(directionType::rev, 1, rotationUnits::rev, 75, velocityUnits::pct);    //lift down to drop goal
 RightLift.startRotateFor(directionType::rev, 1, rotationUnits::rev, 75, velocityUnits::pct);
 vex::task::sleep(800);
 Claw.spin(directionType::rev,100, velocityUnits::pct);
 vex::task::sleep(200);       //release goal
 Claw.stop(hold);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 40,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 40, velocityUnits::pct);   //drive away from platform
 BackLeftBase.rotateFor(directionType::rev, 1, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 LeftLift.startRotateFor(directionType::rev, 1.5, rotationUnits::rev);
 RightLift.startRotateFor(directionType::rev, 1.5, rotationUnits::rev); //lift completely down
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 1.3, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 1.3, rotationUnits::rev, 35,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::fwd, 1.3, rotationUnits::rev, 35, velocityUnits::pct);   //turn left 
 BackLeftBase.rotateFor(directionType::rev, 1.3, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, .95, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, .95, rotationUnits::rev, 35,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, .95, rotationUnits::rev, 35, velocityUnits::pct);   //drive back to drop blue off
 BackLeftBase.rotateFor(directionType::rev, .95, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 Conveyor.spin(reverse, 100, velocityUnits::pct);
 vex::task::sleep(220);   //drop off blue goal
 Conveyor.stop();
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, .362, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, .362, rotationUnits::rev, 35,velocityUnits::pct);    //turn left towards red goal
 BackRightBase.startRotateFor(directionType::rev, .362, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, .362, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 2.85, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 2.85, rotationUnits::rev, 40,velocityUnits::pct);  //drive forward for red goal 
 BackRightBase.startRotateFor(directionType::fwd, 2.85, rotationUnits::rev, 40, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 2.85, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 Claw.spin(directionType::fwd,100, velocityUnits::pct);
 vex::task::sleep(400);
 Claw.stop(hold);   //grab red goal
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, .3, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, .3, rotationUnits::rev, 35,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, .3, rotationUnits::rev, 35, velocityUnits::pct);    //turn a bit to the right to align with middle
 BackLeftBase.rotateFor(directionType::fwd, .3, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, 6.5, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 6.5, rotationUnits::rev, 40,velocityUnits::pct);    //back middle to blue home zone
 BackRightBase.startRotateFor(directionType::rev, 6.5, rotationUnits::rev, 40, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::rev, 6.5, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 Conveyor.spin(reverse, 100, velocityUnits::pct);
 vex::task::sleep(110);
 Conveyor.stop();   //drop middle off
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 1, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::fwd, 1, rotationUnits::rev, 35, velocityUnits::pct); //turn towards red platform
 BackLeftBase.rotateFor(directionType::rev, 1, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(800);
 FrontRightBase.stop();
 FrontLeftBase.stop();    //everything stop
 BackRightBase.stop();
 BackLeftBase.stop();
 vex::task::sleep(500);
 LeftLift.startRotateFor(directionType::fwd, 2.5, rotationUnits::rev);
 RightLift.startRotateFor(directionType::fwd, 2.5, rotationUnits::rev);   //lift up
 vex::task::sleep(1000);
 LeftLift.startRotateFor(directionType::fwd, 2.5, rotationUnits::rev);
 RightLift.startRotateFor(directionType::fwd, 2.5, rotationUnits::rev); //lift up again
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 2.1, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 2.1, rotationUnits::rev, 40,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::fwd, 2.1, rotationUnits::rev, 40, velocityUnits::pct); //drive forward towards red platform
 BackLeftBase.rotateFor(directionType::fwd, 2.1, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 LeftLift.startRotateFor(directionType::rev, 1.3, rotationUnits::rev);
 RightLift.startRotateFor(directionType::rev, 1.3, rotationUnits::rev); //lift down
 vex::task::sleep(800);
 Claw.spin(directionType::rev,100, velocityUnits::pct);
 vex::task::sleep(200); //drop red goal
 Claw.stop(hold);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 40,velocityUnits::pct);   //drive away from platform
 BackRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 40, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::rev, 1, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 LeftLift.startRotateFor(directionType::rev, 1, rotationUnits::rev);
 RightLift.startRotateFor(directionType::rev, 1, rotationUnits::rev);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, 4.3, rotationUnits::rev, 45,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 4.3, rotationUnits::rev, 45,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, 4.3, rotationUnits::rev, 45, velocityUnits::pct);  //drive back to push the neutral
 BackLeftBase.rotateFor(directionType::rev, 4.3, rotationUnits::rev, 45,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, .68, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, .68, rotationUnits::rev, 35,velocityUnits::pct);    //turn right towards the blue goal
 BackRightBase.startRotateFor(directionType::rev, .68, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, .68, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 2.6, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 2.6, rotationUnits::rev, 40,velocityUnits::pct);  //drive forward for blue goal 
 BackRightBase.startRotateFor(directionType::fwd, 2.6, rotationUnits::rev, 40, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 2.6, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 Claw.spin(directionType::fwd,100, velocityUnits::pct);
 vex::task::sleep(500);       
 Claw.stop(hold);
 vex::task::sleep(500);
 LeftLift.startRotateFor(directionType::fwd, 2.5, rotationUnits::rev);
 RightLift.startRotateFor(directionType::fwd, 2.5, rotationUnits::rev);   //lift up
 vex::task::sleep(800);
 LeftLift.startRotateFor(directionType::fwd, 2.5, rotationUnits::rev);
 RightLift.startRotateFor(directionType::fwd, 2.5, rotationUnits::rev);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, .55, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, .55, rotationUnits::rev, 35,velocityUnits::pct);    //turn right
 BackRightBase.startRotateFor(directionType::rev, .55, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, .55, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 1.02, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 1.02, rotationUnits::rev, 35,velocityUnits::pct);    //drive forward
 BackRightBase.startRotateFor(directionType::fwd, 1.02, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 1.02, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(500);
LeftLift.startRotateFor(directionType::rev, 1.1, rotationUnits::rev);
RightLift.startRotateFor(directionType::rev, 1.1, rotationUnits::rev); //lift down
vex::task::sleep(1000);
Claw.spin(directionType::rev,100, velocityUnits::pct);
vex::task::sleep(200); //drop blue goal
Claw.stop(hold);
vex::task::sleep(200);
FrontRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35,velocityUnits::pct);    //drive away from platform
 BackRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::rev, 1, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(200);
LeftLift.startRotateFor(directionType::rev, 1, rotationUnits::rev);
RightLift.startRotateFor(directionType::rev, 1, rotationUnits::rev); //lift down
FrontRightBase.startRotateFor(directionType::rev, .55, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, .55, rotationUnits::rev, 35,velocityUnits::pct);    //turn right
 BackRightBase.startRotateFor(directionType::rev, .55, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, .55, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(200);
 FrontRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35,velocityUnits::pct);    //drive to away from platform
 BackRightBase.startRotateFor(directionType::rev, 1, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::rev, 1, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(200);
*/ 

 //left side 

 Conveyor.spin(forward, 20, velocityUnits::pct);
 vex::task::sleep(270);
 Conveyor.stop(hold);
 vex::task::sleep(500);
 Conveyor.spin(forward, 100, velocityUnits::pct); //grab goal  
 vex::task::sleep(270);
 Conveyor.stop(hold);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 1, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 1, rotationUnits::rev, 40,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::fwd, 1, rotationUnits::rev, 40, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 1, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, 1.2, rotationUnits::rev, 35,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 1.2, rotationUnits::rev, 35,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, 1.2, rotationUnits::rev, 35, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 1.2, rotationUnits::rev, 35,velocityUnits::pct);
 vex::task::sleep(200);
 Claw.spin(directionType::rev,100, velocityUnits::pct);
 vex::task::sleep(200);
 Claw.stop();
 vex::task::sleep(600);
 FrontRightBase.startRotateFor(directionType::fwd, 2.7, rotationUnits::rev, 70,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 2.7, rotationUnits::rev, 70,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::fwd, 2.7, rotationUnits::rev, 70, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 2.7, rotationUnits::rev, 70,velocityUnits::pct);
 vex::task::sleep(600);
 Claw.spin(directionType::fwd,100, velocityUnits::pct);
 vex::task::sleep(300);
 Claw.stop(hold);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, 2.3, rotationUnits::rev, 60,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 2.3, rotationUnits::rev, 60,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, 2.3, rotationUnits::rev, 60, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::rev, 2.3, rotationUnits::rev, 60,velocityUnits::pct);
 

 //rightauton
 /*
 FrontRightBase.startRotateFor(directionType::rev, 1.1, rotationUnits::rev, 30,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, 1.1, rotationUnits::rev, 30,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, 1.1, rotationUnits::rev, 30, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::rev, 1.1, rotationUnits::rev, 30,velocityUnits::pct);
 vex::task::sleep(600);
 Conveyor.spin(forward, 20, velocityUnits::pct);
 vex::task::sleep(270);
 Conveyor.stop(hold);
 vex::task::sleep(500);
 Conveyor.spin(forward, 100, velocityUnits::pct); //grab goal  
 vex::task::sleep(270);
 Conveyor.stop(hold);
 vex::task::sleep(500);
  FrontRightBase.startRotateFor(directionType::rev, .4, rotationUnits::rev, 30,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::rev, .4, rotationUnits::rev, 30,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, .4, rotationUnits::rev, 30, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::rev, .4, rotationUnits::rev, 30,velocityUnits::pct);
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::rev, 1.05, rotationUnits::rev, 40,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 1.05, rotationUnits::rev, 40,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::rev, 1.05, rotationUnits::rev, 40, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 1.05, rotationUnits::rev, 40,velocityUnits::pct);
 vex::task::sleep(500);
 Claw.spin(directionType::rev,100, velocityUnits::pct);
 vex::task::sleep(300);
 Claw.stop();
 vex::task::sleep(500);
 FrontRightBase.startRotateFor(directionType::fwd, 3.25, rotationUnits::rev, 55,  velocityUnits::pct);
 FrontLeftBase.startRotateFor(directionType::fwd, 3.25, rotationUnits::rev, 55,velocityUnits::pct);
 BackRightBase.startRotateFor(directionType::fwd, 3.25, rotationUnits::rev,55, velocityUnits::pct);
 BackLeftBase.rotateFor(directionType::fwd, 3.25, rotationUnits::rev, 55,velocityUnits::pct);
vex::task::sleep(500);
 Claw.spin(forward,100, velocityUnits::pct);
 vex::task::sleep(300);
 Claw.stop(hold);
 vex::task::sleep(500);
 FrontRightBase.spin(directionType::rev,70, velocityUnits::pct);
 FrontLeftBase.spin(directionType::rev,70, velocityUnits::pct);
 BackRightBase.spin(directionType::rev,70, velocityUnits::pct);
 BackLeftBase.spin(directionType::rev,70, velocityUnits::pct);
 vex::task::sleep(500);
 Conveyor.spin(reverse,30, velocityUnits::pct);
 vex::task::sleep(300);
 Conveyor.stop(hold);
 */
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
    FrontLeftBase.spin(fwd,Controller1.Axis3.position(),velocityUnits::pct);
    BackLeftBase.spin(fwd,Controller1.Axis3.position(),velocityUnits::pct);
    FrontRightBase.spin(fwd, Controller1.Axis2.position(), velocityUnits::pct);
    BackRightBase.spin(fwd, Controller1.Axis2.position(), velocityUnits::pct);
 
 if (Controller1.ButtonR1.pressing()){
   RightLift.spin(fwd,100,velocityUnits::pct);
   LeftLift.spin(fwd,100,velocityUnits::pct);

 }
  else if (Controller1.ButtonR2.pressing()){
    RightLift.spin(reverse, 100, velocityUnits::pct);
    LeftLift.spin(reverse, 100, velocityUnits::pct);
  }
   else {
     RightLift.stop();
     LeftLift.stop();

   }
   
 if (Controller1.ButtonA.pressing()) {
   Claw.spin(fwd, 100, velocityUnits::pct);
}
  else if (Controller1.ButtonB.pressing()){
    Claw.spin(reverse, 100, velocityUnits::pct);
  }
  else {
    Claw.stop(hold);
  }
 if (Controller1.ButtonL1.pressing()) {
   Conveyor.spin(fwd, 100, velocityUnits::pct);
 }
  else if (Controller1.ButtonL2.pressing()) {
    Conveyor.spin(reverse, 100, velocityUnits::pct);
  }
  else {
    Conveyor.stop(hold);
  }
  }
 }



//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
