class SailCommand {

public:

	SailCommand();
	~SailCommand();

	// calulates the command to set the sailposition
	int getSailCommand(int courseToSteer, int trueWindDirection);

private:
	//modifies degree range from 0->360 to -180->180
	int modifyDegreeRange(int deg);

	//sailcommands from SailControl documentation
	//
	enum sailCommands {
		STARBOARD_CLOSE_REACH = 1,
		STARBOARD_BEAM_REACH = 3,
		STARBOARD_BROAD_REACH = 6,
		STARBOARD_RUNNING = 9,
		PORT_CLOSE_REACH = -1,
		PORT_BEAM_REACH = -3,
		PORT_BROAD_REACH = -6,
		PORT_RUNNING = -9
	};
};
