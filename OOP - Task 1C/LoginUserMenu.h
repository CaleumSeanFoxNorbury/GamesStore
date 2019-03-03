#pragma once

#include "Menu.h"
#include <vector>

class LoginUserMenu : public Menu {
public:
	LoginUserMenu(const std::string& title, Application * app);
	void OutputOptions() final;
	bool HandleChoice(const char choice) final;
	std::vector<std::string> const &getUsers() const { return users; } // returning users' vector, const because it won't be edited
	//std::vector<std::string> const &getUserByID(const int index) const { return users.at[&index]; } // returning user details by ID
protected:
	LoginUserMenu *login;
private:
	std::vector<std::string> users = { "admin", "Adrian", "Bob", "Spamuel" };
};