#include "LoginUserMenu.h"
#include "MainMenu.h"

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
	int userNumber = choice - '0';
	if (userNumber >= 0 && userNumber <= users.size())//user wants to login		
	{
		//std::vector<std::string>::iterator username = std::find_if(users.begin(), users.end(), choice);
		// After deep consideration I have found the above method to be too much complicated as there's .at function.
		std::string username = users.at(--userNumber);// making number smaller by one because the input starts at 1, vector starts at 0
		std::string password = Question("Enter password for " + username);
		if (password == "pwd") {
			//password is correct, go to the main page
			app->LogIn();//login the user so the system knows
			MainMenu("GAME SYSTEM", app); //transfer the user there
		}
	}
	return false;
}
