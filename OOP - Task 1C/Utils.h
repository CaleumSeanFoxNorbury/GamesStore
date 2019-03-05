#pragma once

#include <string>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <ctime>

class Utils
{
  public:
	static std::string GetLineFromUser();
	static char GetCharFromUser();
	const static std::string currentDate();
};