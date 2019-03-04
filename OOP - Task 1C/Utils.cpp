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