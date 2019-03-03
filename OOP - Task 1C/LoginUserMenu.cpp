#include "LoginUserMenu.h"
#include <algorithm>
#include <stdlib.h>

LoginUserMenu::LoginUserMenu(const std::string & title, Application * app) : Menu(title, app)
{
	Paint(); //required in constructor
}

void LoginUserMenu::OutputOptions()
{
	std::vector<std::string> users = getUsers(); //getting current list of users
	int counter = 0;
	for each (std::string user in users)//looping through every element in vector
	{
		counter++; // for ID purposes
		Option(counter, user); //printing out options to the user
	}
}

bool LoginUserMenu::HandleChoice(char choice)
{
	std::vector<std::string> users = getUsers();
	int userNumber = std::atoi(&choice);
	if (userNumber >= 0 && userNumber <= users.size())//user wants to login		
	{
		//std::vector<std::string>::iterator username = std::find_if(users.begin(), users.end(), choice);
		// After deep consideration I have found the above method to be too much complicated as there's .at function.
		std::string username = users.at(--userNumber);
		Question("Enter password for " + username);
	}
	return false;
}
