#include <iostream>
#include <string>
#include "Application.h"
#include "MainMenu.h"
#include "Account.h"
#include "User.h"
#include "Player.h"
#include "Admin.h"
#include "Utils.h"


void createHardcodedTestData(Application& app)
{
	// Setup store with some games
	app.GetStore().games[0] = new Game("The Witness", "Explore a nice island and solve puzzles.", 2999, 5);
	app.GetStore().games[1] = new Game("Braid", "A time twisting puzzle game.", 499, 15);
	app.GetStore().games[2] = new Game("Factorio", "Build a complicated factory in space.", 1599, 12);
	app.GetStore().games[3] = new Game("LIMBO", "Watch out for that spider.", 299, 12);
	app.GetStore().games[4] = new Game("INSIDE", "What are those scientists even doing?!", 1299, 15);
	app.GetStore().games[5] = new Game("Portal 2", "Play around with physics. Shoot the moon.", 1999, 15);
	app.GetStore().games[6] = new Game("Half Life 3", "It's never coming out.", 5999, 18);
	app.GetStore().games[7] = new Game("Castle Crashers", "A small giraffe follows you around.", 999, 18);
	app.GetStore().games[8] = new Game("Brothers", "Split your brain into two thumbs.", 799, 15);

	// Create some users
	Player* u1 = new Admin("Alice", "password", Date(2018, 06, 16));
	Player* u2 = new Player("Bob", "password", Date(2018, 9, 19));
	Player* u3 = new Player("Charlie", "password", Date(2018, 9, 24));

	// With some games in their library
	LibraryItem* li = new LibraryItem(Date(2018, 06, 17), app.GetStore().games[0]);
	u1->library.addInFront(li);
	LibraryItem* la = new LibraryItem(Date(2018, 06, 18), app.GetStore().games[1]);
	u1->library.addInFront(la);

	LibraryItem* lb = new LibraryItem(Date(2018, 9, 19), app.GetStore().games[2]);
	u2->library.addInFront(lb);
	LibraryItem* lc = new LibraryItem(Date(2018, 9, 19), app.GetStore().games[3]);
	u2->library.addInFront(lc);

	LibraryItem* ld = new LibraryItem(Date(2018, 9, 24), app.GetStore().games[3]);
	u3->library.addInFront(ld);
	LibraryItem* le = new LibraryItem(Date(2018, 9, 30), app.GetStore().games[6]);
	u3->library.addInFront(le);

	// Make an account and attach the users
	app.accounts.addInFront(new Account("alice@shu.com", "password", Date(2018, 06, 16)));
	app.accounts[0]->users.addInFront(u1);
	app.accounts[0]->users.addInFront(u2);
	app.accounts[0]->users.addInFront(u3);
}

void main()
{
	Application app;
	createHardcodedTestData(app);

	// TODO: app.Load();
	// TODO: app.Save();
	MainMenu("MAIN MENU", &app);
}