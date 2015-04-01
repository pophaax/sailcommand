#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "SailCommand.h"


TEST_CASE("SailCommandTest")
{
	SECTION("Test SailCommand with 27 different wind directions, which results in a correct set of commands")
	{
		const int noOfwindDir = 27;
		int windDir[] = { 0, 1, 39, 40, 41, 70, 80, 81, 119, 120, 121,
			179, 180, 181, 239, 240, 241, 241, 279, 280, 281, 319,
			320, 321, 359, 360, 361 };

		/* Results from running example.cpp */
		const int resulting_command[noOfwindDir] = {3,2,2,2,2,2,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,2,2,2,2,3,2};

		SailCommand sc;
		sc.setCommandValues(0, 1, 2, 3);
		sc.setAngleValues(120, 80, 40);
		
		for (int i = 0; i < noOfwindDir; i++) {
			REQUIRE(sc.getCommand(windDir[i]) == resulting_command[i]);
		}
	}

}