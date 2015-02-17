#include <Tube.h>
Tube::Tube(int x, int y, bool canBeAvailed) {
	xpos = x;
	ypos = y;
	isAvailable = canBeAvailed;
}
void Tube::updateStatus(bool newStatus) {
	isAvailable = newStatus;
}