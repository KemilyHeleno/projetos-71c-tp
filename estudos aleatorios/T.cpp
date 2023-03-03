#include <iostream>
#include <string>
#include <Windows.h>

// To be used with the new coutc
enum DOS_COLORS 
{
	BLACK, BLUE, GREEN, CYAN, RED, PURPLE, YELLOW,
	WHITE, GRAY, BRIGHT_BLUE, BRIGHT_GREEN, BRIGHT_CYAN,
	BRIGHT_RED, LILAC, BRIGHT_YELLOW, BRIGHT_WHITE 
};

namespace coutcolor
{
const DOS_COLORS BACKCOLOR = BLUE;
const DOS_COLORS TEXTCOLOR = BRIGHT_WHITE;

// Instances of coutc to handle c-strings, const c-strings and std::strings.
bool coutc(char msg[257], DOS_COLORS background_color = BACKCOLOR, DOS_COLORS foreground_color = TEXTCOLOR, DOS_COLORS default_background = BACKCOLOR, DOS_COLORS default_foreground = TEXTCOLOR);
bool coutc(const char msg[257], DOS_COLORS background_color = BACKCOLOR, DOS_COLORS foreground_color = TEXTCOLOR, DOS_COLORS default_background = BACKCOLOR, DOS_COLORS default_foreground = TEXTCOLOR);
bool coutc(std::string msg, DOS_COLORS background_color = BACKCOLOR, DOS_COLORS foreground_color = TEXTCOLOR, DOS_COLORS default_background = BACKCOLOR, DOS_COLORS default_foreground = TEXTCOLOR);

	// Function for use of coutc - But can be used by other functions
	bool ColorChange(DOS_COLORS background_color = BACKCOLOR, DOS_COLORS foreground_color = TEXTCOLOR);
};
