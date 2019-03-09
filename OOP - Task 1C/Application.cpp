#include "Application.h"

Application::Application() : currentAccount(nullptr), currentUser(nullptr), userIsLoggedIn_(false)
{
}

Application::~Application()
{
	for (int i = 0; i < 1; ++i)
	{
		delete accounts[i];
	}
}

bool Application::IsAccountLoggedIn() const
{
	return currentAccount != nullptr;
}

bool Application::IsUserLoggedIn()
{
	return userIsLoggedIn_;
}

Account* Application::GetCurrentAccount() const
{
	return currentAccount;
}

User* Application::GetCurrentUser() const
{
	return currentUser;
}

Store& Application::GetStore()
{
	return store;
}

void Application::LogOut()
{
	userIsLoggedIn_ = false;
}

void Application::LogIn()
{
	userIsLoggedIn_ = true;
}