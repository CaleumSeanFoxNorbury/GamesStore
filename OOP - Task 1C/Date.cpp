#include "Date.h"

const void Date::getCurrentDate()
{
	SYSTEMTIME t; // Declare SYSTEMTIME struct
	GetSystemTime(&t); // Fill out the struct so that it can be used
	std::cout << std::setfill('0') << t.wYear << "-" << std::setw(2) << t.wMonth << "-" << std::setw(2) << t.wDay << std::endl;// Return year, month, day
 	return(void());
}
