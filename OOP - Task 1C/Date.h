#pragma once
#include <string>
#include <iostream>
#include <windows.h> // use to define SYSTEMTIME , GetLocalTime() and GetSystemTime()
#include <iomanip>

class Date {
public:
	const static void getCurrentDate();
};