class SailCommand {

public:

	SailCommand();
	~SailCommand();

	// calulates the command to set the sailposition
	int getSailCommand(int relativeWind);

	//sets the commandvalues
	void setCommandValues(int closeReach, int beamReach, int broadReach, int running);
	
private:

	int m_closeReach;
	int m_beamReach;
	int m_broadReach;
	int m_running;
};
