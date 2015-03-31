#include <math.h>

class SailCommand {

public:
	SailCommand();
	~SailCommand();

	// calulates the command to set the sailposition
	int getCommand(int relativeWind);

	//sets the commandvalues returned by getSailCommand()
	void setCommandValues(int closeReach, int beamReach, int broadReach, int running);
	
	//sets the windsectors, closereach will use the whats left
	void setAngleValues(int beamReach, int broadReach, int running);
	
private:
	int m_closeReachCommand;
	int m_beamReachCommand;
	int m_broadReachCommand;
	int m_runningCommand;
	
	int m_delta;

	int m_beamReachAngle;
	int m_broadReachAngle;
	int m_runningAngle;
};
