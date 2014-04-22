class SailCommand {

public:

	SailCommand();
	~SailCommand();

	// calulates the command to set the sailposition
	int getSailCommand(int courseToSteer, int trueWindDirection);
	int getSailCommand(int relativeWind);

private:
	//modifies degree range from 0->360 to -180->180
	int modifyDegreeRange(int deg);

	//sailcommands from SailControl documentation
	enum sailCommands {
		CLOSE_REACH = 10,	//0-40 & 320-360 deg relative wind direction
		BEAM_REACH = 30,		//40-80 & 280-320
		BROAD_REACH = 60,	//80-120 & 240-280
		RUNNING = 90			//120-240
	};
};
