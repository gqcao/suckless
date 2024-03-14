#define PATH(app) "/home/gcao/.local/statusbar/"app

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", PATH("weather"),           3600,		0},
	{"", PATH("volume"),            0,		10},
	{"", PATH("memory"),            30,		1},
	{"", PATH("disk"),              30,		2},
	{"", PATH("battery"),           5,		3},

	{"", "date '+%Y-%m-%d %H:%M:%S'",					5,		4},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
