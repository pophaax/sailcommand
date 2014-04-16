#include <iostream>
#include "SailCommand.h"


int main() {
	SailCommand sc;
	int windDir[] = { 0, 1, 39, 40, 41, 70, 80, 81, 119, 120, 121,
		179, 180, 181, 239, 240, 241, 241, 279, 280, 281, 319,
		320, 321, 359, 360, 361 };
	
	int cts = 0;
	std::cout << "course to steer: " << cts << std::endl;
	for (int i = 0; i < 27; i++) {
		std::cout <<"wd: " << windDir[i] << ", sailCommand: " << sc.getSailCommand(cts, windDir[i]) << std::endl;
		std::cout <<"rwd: " << windDir[i] << ", sailCommand2: " << sc.getSailCommand(windDir[i]) << std::endl;
	}
}