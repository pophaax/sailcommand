#include "SailCommand.h"

SailCommand::SailCommand() {
	m_delta = 10;
}

SailCommand::~SailCommand() {

}

int SailCommand::getCommand(int relativeWind) {
	double midpoint = (m_runningCommand + m_closeReachCommand) / 2.0 ;
	double delta = m_runningCommand - midpoint;
	return (int) ( midpoint + cos( relativeWind * (M_PI / 180)) * delta );
}

void SailCommand::setCommandValues(int closeReach, int beamReach, int broadReach, int running) {
	m_closeReachCommand = closeReach;
	m_beamReachCommand = beamReach;
	m_broadReachCommand = broadReach;
	m_runningCommand = running;
}

void SailCommand::setAngleValues(int beamReach, int broadReach, int running) {
	m_beamReachAngle = beamReach;
	m_broadReachAngle = broadReach;
	m_runningAngle = running;	
}
