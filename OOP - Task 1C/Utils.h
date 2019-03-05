#pragma once

#include <string>
#include <iostream>
#include <windows.h> // use to define SYSTEMTIME , GetLocalTime() and GetSystemTime()
#include <stdio.h> // For printf() (could otherwise use WinAPI equivalent)

class Utils
{
  public:
	static std::string GetLineFromUser();
	static char GetCharFromUser();
	const static void currentDate();
};