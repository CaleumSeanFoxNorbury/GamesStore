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

const std::string Utils::currentDate() //returns const current date as buf, buf is std::string
{
	//time_t now = time(0);
	//struct tm tstruct;
	//char buf[80];
	//tstruct = *localtime(&now);
	//strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);
	//return buf;
	//this won't work currently, localtime is depreciated. localtime_s, wants two args but we don't want it.
}
