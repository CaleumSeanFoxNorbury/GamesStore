#pragma once

#include "Account.h"
#include "User.h"
#include "Store.h"

class Application
{
public:
	Application();
	~Application();

	bool IsAccountLoggedIn() const;
	bool IsUserLoggedIn();
	Account* GetCurrentAccount() const;
	User* GetCurrentUser() const;

	Store& GetStore();

	void LogIn();
	void LogOut();

	List<Account*> accounts;
private:
	Store store;
	Account* currentAccount;
	User* currentUser;
	bool userIsLoggedIn_ = true;
};