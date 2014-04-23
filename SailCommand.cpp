#include "SailCommand.h"

SailCommand::SailCommand() {
	
}

SailCommand::~SailCommand() {

}

int SailCommand::getSailCommand(int relativeWind) {
	if (relativeWind < runningAngle) {
		return m_runningCommand;
	} else if (relativeWind < m_broadReachAngle) {
		return m_broadReachCommand;
	} else if (relativeWind < m_beamReachAngle) {
		return m_beamReachCommand;
	} else if (relativeWind > 360 - runningAngle) {
		return m_runningCommand;
	} else if (relativeWind > 360 - m_broadReachAngle) {
		return m_broadReachCommand;
	} else if (relativeWind > 360 - m_beamReachAngle) {
		return m_beamReachCommand;
	} else {
		return m_closeReachCommand;
	}
}

void SailCommand::setCommands(int closeReach, int beamReach, int broadReach, int running) {
	m_closeReachCommand = closeReach;
	m_beamReachCommand = beamReach;
	m_broadReachCommand = broadReach;
	m_runningCommand = running;
}

void SailCommand::setAngles(int beamReach, int broadReach, int running) {
	m_beamReachAngle = beamReach;
	m_broadReachAngle = broadReach;
	m_runningAngle = running;	
}
