#include "Date.h"

Date::Date(int Day, int Month, int Year) : day(Day), month(Month), year(Year)
{
}

Date::~Date()
{
}

const void Date::getCurrentDate()
{
	SYSTEMTIME t; // Declare SYSTEMTIME struct
	GetSystemTime(&t); // Fill out the struct so that it can be used
	std::cout << std::setfill('0') << t.wYear << "-" << std::setw(2) << t.wMonth << "-" << std::setw(2) << t.wDay << std::endl;// Return year, month, day
	return(void());
}

bool Date::isDateValid()
{

	return false;
}
