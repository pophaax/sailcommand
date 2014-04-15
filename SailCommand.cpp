#include "SailCommand.h"

SailCommand::SailCommand() {

}

SailCommand::~SailCommand() {

}

int SailCommand::getSailCommand(int courseToSteer, int windDirection) {

	int diff = modifyDegreeRange(courseToSteer) - modifyDegreeRange(windDirection);

	if (diff < -120) {
		return STARBOARD_CLOSE_REACH;
	} else if (diff < -80) {
		return STARBOARD_BEAM_REACH;
	} else if (diff < -40) {
		return STARBOARD_BROAD_REACH;
	} else if (diff < 0) {
		return STARBOARD_RUNNING;
	} else if (diff < 40) {
		return PORT_RUNNING;
	} else if (diff < 80) {
		return PORT_BROAD_REACH;
	} else if (diff < 120) {
		return PORT_BEAM_REACH;
	} else {
		return PORT_CLOSE_REACH;
	}
	return 0;
}


int SailCommand::modifyDegreeRange(int deg) {
	if (deg > 180) {
		return -360 + deg;
	}
	if (deg < -180) {
		return 360 + deg;
	}
	return deg;
}
