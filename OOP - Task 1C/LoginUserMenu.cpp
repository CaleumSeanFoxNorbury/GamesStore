#include "LoginUserMenu.h"

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

bool LoginUserMenu::HandleChoice(const char choice)
{
	Question("I was triggered");
	switch (choice) {
	case 1://user wants to login		
		std::vector<std::string> users = getUsers();
		for (auto i = users.begin(); i != users.end(); ++i) {
			std::cout << *i << ' ';
		}
		break;
	}
	return false;
}
