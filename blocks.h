//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"memory",	10,	14},
//	{"",	"cpu",		10,	18},
//	{"",	"cpubars",		10,	18},
	{"",	"volume",	1,	10},
	{"",	"battery",	5,	3},
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 100;
