using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor Claw;
extern motor LeftLift;
extern motor RightLift;
extern motor Conveyor;
extern motor FrontLeftBase;
extern motor BackLeftBase;
extern motor FrontRightBase;
extern motor BackRightBase;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );