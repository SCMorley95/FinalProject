#include <Arduino.h>
class Tube {
public:
	Tube(int x, int y, bool canBeAvailed);
	int xpos;
	int ypos;
	bool isAvailable;
	void updateStatus(bool newStatus);
}