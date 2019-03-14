#pragma once
#include <string>
#include <iostream>
#include <windows.h> // use to define SYSTEMTIME , GetLocalTime() and GetSystemTime()
#include <iomanip>

class Date {
public:
	Date(int Day, int Month, int Year);
	~Date();

	const static void getCurrentDate(); //move to u but check spec 
	bool isDateValid();

private:
	int day, month, year;
};