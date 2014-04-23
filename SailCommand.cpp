#include "SailCommand.h"

SailCommand::SailCommand() {

}

SailCommand::~SailCommand() {

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
