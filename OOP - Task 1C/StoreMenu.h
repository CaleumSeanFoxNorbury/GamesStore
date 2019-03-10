#pragma once

#include "Menu.h"


#include <string>
#include <vector>

class StoreMenu : public Menu
{
public:
	StoreMenu(const std::string& title, Application * app);
	void OutputOptions() final;
	bool HandleChoice(char choice) final;
	char showGameMenuAndGetUserChoice(Game * game);
	void gameMenu(Game * game);
	std::vector<std::string> games = { "Factorio", "The Witness", "INSIDE", "Brothers" };
};