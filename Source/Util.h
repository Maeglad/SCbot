#pragma once

struct resourceStruct{
		int minerals;
		int gas;
	};

struct gasHarvester{
		BWAPI::Unit* harvester;
		int workerCount;
	};

namespace BWColor
{
	const int RED = 111;
	const int BLUE = 165;
	const int TEAL = 159;
	const int PURPLE = 164;
	const int ORANGE = 179;
	const int BROWN = 19;
	const int WHITE = 255;
	const int YELLOW = 135;
	const int GREEN = 117;
	const int CYAN = 128;
	const int BLACK = 0;
	const int GREY = 74;
};
