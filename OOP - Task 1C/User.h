#pragma once

#include <string>
#include "Date.h"
#include "Game.h"



class User
{
public:
	User(const std::string&, const std::string&, const Date&);
	virtual ~User();
	const std::string& GetUsername() const;
	//void View_Games();
private:
	//List<Game*> ListGame;
	std::string username;
	std::string password;
	Date created;
};