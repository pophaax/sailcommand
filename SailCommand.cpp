#include "SailCommand.h"
#include <math.h>


SailCommand::SailCommand() {

}

SailCommand::~SailCommand() {

}

int SailCommand::getCommand(int relativeWind) {
	double midpoint = (m_runningCommand + m_closeReachCommand) / 2.0 ;
	double delta = m_runningCommand - midpoint;
	return (int) ( midpoint + cos( relativeWind * (M_PI / 180)) * delta );
}

void SailCommand::setCommandValues(int closeReach, int running) {
	m_closeReachCommand = closeReach;
	m_runningCommand = running;
}