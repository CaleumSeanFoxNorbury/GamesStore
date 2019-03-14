#include "User.h"

User::User(const std::string& username, const std::string& password, const Date& created) : username(username), password(password), created(created)
{
}

User::~User()
{
}

const std::string& User::GetUsername() const
{
	return username;
}

/*
void User::View_Games()
{
for (int i(0); i < Store)
{
std::cout << app->store().getGame();
}
}
*/