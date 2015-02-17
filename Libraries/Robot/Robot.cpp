#include <Robot.h>
Robot::Robot(int iposition[2], int idirection[2], Servo motorLeft, Servo motorRight) {
	motorL = motorLeft;
	motorR = motorRight;
	position = iposition;
	direction = idirection;
}
Tube Robot::getNearest(Tube tubeList[4]) {
	int y = position[1];
	int dist = 5;
	Tube closestTube;
	for(i=0;i<=3;i++) {
		Tube currentTube = tubeList[i]
		if(currentTube.isAvailable) {
			int thisDist = abs(currentTube.ypos - y);
			if(thisDist < dist) {
				dist = thisDist;
				closestTube = currentTube;
			}
		}
	}
	return closestTube;
}
Tube Robot::getNearestReactor(Tube tubeList[2]) {
	Tube closestReactor;
	if(position[1] > 3) {
		closestReactor = tubeList[0];
	}
	else {
		closestReactor = tubeList[1];
	}
	return closestReactor;
}
void Robot::goTo(int c, int d) {
	int diff = d - position[c];
	int dir = diff / abs(diff);
	while(dir != direction[c]) {
		turn('R');
	}
	while(position[c] != d) {
		goFowardOne();
	}
	stop();
}
void Robot::navigateTo(Tube targetTube) {
	int x = targetTube.xpos;
	int y = targetTube.ypos;
	goTo(0,1);
	goTo(1, y);
	goTo(0, x);
}
void Robot::goForwardsOne() {
	while(notAtIntersection()) {
		motorL.write();
		motorR.write();
	}
	stop();
}
void turn() {
	while(notDoneTurning()) {
		motorL.write();
		motorR.write();
	}
}
void stop() {
	motorL.write();
	motorR.write();
}
bool notAtIntersection() {

}
bool notDoneTurning() {
	
}