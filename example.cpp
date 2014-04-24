#include <iostream>
#include "SailCommand.h"


int main() {
	SailCommand sc;
	sc.setCommandValues(0, 1, 2, 3);
	sc.setAngleValues(120, 80, 40);

	int windDir[] = { 0, 1, 39, 40, 41, 70, 80, 81, 119, 120, 121,
		179, 180, 181, 239, 240, 241, 241, 279, 280, 281, 319,
		320, 321, 359, 360, 361 };
	
	int cts = 0;
	for (int i = 0; i < 27; i++) {
		std::cout <<"rwd: " << windDir[i] << ", sailCommand2: " << sc.getCommand(windDir[i]) << std::endl;
	}
}