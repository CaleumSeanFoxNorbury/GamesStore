#include "Utils.h"

std::string Utils::GetLineFromUser()
{
	std::string input;
	std::getline(std::cin, input);
	return input;
}

char Utils::GetCharFromUser()//ERROR HERE, TAKES FIRST CHAR
{
	return toupper(GetLineFromUser()[0]);
}

const void Utils::currentDate()
{
	SYSTEMTIME t; // Declare SYSTEMTIME struct
	GetSystemTime(&t); // Fill out the struct so that it can be used
	printf("%4d-%02d-%02d", t.wYear, t.wMonth, t.wDay); // Return year, month, day
	return(void());
}
