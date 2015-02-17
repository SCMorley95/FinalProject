#include <Arduino.h>
#include <Tube.h>
#include <Servo.h>
class Robot {
public:
	Robot(int iposition[2], int idirection[2], Servo motorLeft, Servo motorRight);
	Servo motorL;
	Servo motorR;
	int position[2];
	int direction[2];
	Tube getNearest(Tube tubeList[4]);
	Tube getNearestReactor(Tube reactorList[2]);
	void navigateTo(int x, int y);
	void goTo(int c, int d);
	void goForwardsOne();
	void turn(char dir);
	void stop();
	bool notAtIntersection();
	bool notDoneTurning();
}