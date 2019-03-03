#include "LoginUserMenu.h"

LoginUserMenu::LoginUserMenu(const std::string & title, Application * app) : Menu(title, app)
{
	Paint(); //required in constructor
}

void LoginUserMenu::OutputOptions()
{
	std::vector<std::string> users = getUsers();
	int counter = 0;
	for each (std::string user in users)
	{
		counter++;
		Option(counter, user);
	}
}

bool LoginUserMenu::HandleChoice(char choice)
{
	switch (choice) {
	case 'L'://user wants to login		
		std::vector<std::string> users = getUsers();
		for (auto i = users.begin(); i != users.end(); ++i) {
			std::cout << *i << ' ';
		}
		break;
	}
	return false;
}
