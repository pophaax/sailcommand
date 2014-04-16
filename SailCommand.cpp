#include "SailCommand.h"

SailCommand::SailCommand() {

}

SailCommand::~SailCommand() {

}

int SailCommand::getSailCommand(int courseToSteer, int windDirection) {

	int diff = modifyDegreeRange(courseToSteer) - modifyDegreeRange(windDirection);

	if (diff < -120) {
		return CLOSE_REACH;
	} else if (diff < -80) {
		return BEAM_REACH;
	} else if (diff < -40) {
		return BROAD_REACH;
	} else if (diff < 0) {
		return RUNNING;
	} else if (diff < 40) {
		return RUNNING;
	} else if (diff < 80) {
		return BROAD_REACH;
	} else if (diff < 120) {
		return BEAM_REACH;
	} else {
		return CLOSE_REACH;
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


int SailCommand::getSailCommand(int relativeWind) {

	if (relativeWind < 40) {
		return RUNNING;
	} else if (relativeWind < 80) {
		return BROAD_REACH;
	} else if (relativeWind < 120) {
		return BEAM_REACH;
	} else if (relativeWind < 180) {
		return CLOSE_REACH;
	} else if (relativeWind < 240) {
		return CLOSE_REACH;
	} else if (relativeWind < 280) {
		return BEAM_REACH;
	} else if (relativeWind < 320) {
		return BROAD_REACH;
	} else {
		return RUNNING;
	}
	return 0;
}
