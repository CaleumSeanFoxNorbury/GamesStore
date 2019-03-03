#include "Application.h"

Application::Application() : userIsLoggedIn_(false)
{
}

void Application::LogOut()
{
	userIsLoggedIn_ = false;
}

void Application::LogIn()
{
	userIsLoggedIn_ = true;
}

bool Application::IsUserLoggedIn()
{
	return userIsLoggedIn_;
}