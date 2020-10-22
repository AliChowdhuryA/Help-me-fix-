#include "Game.h"

//Static functions


//Initializers functions

void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "C++ SFML RPG");
}

//Constructors/Destructors


Game::Game() {
	this->initWindow();

}


Game::~Game() {

	delete this->window;
}


//Functions
void Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent)) 
	{if (this->sfEvent.type == sf::Event::Closed)
			this->window->close();
	}
}

void Game::update()
{
	this->updateSFMLEvents();
}

void Game::render()
{
	this->window->clear();

	//Render items

	this->window->display();
}

void Game::run()
{

	while (this->window->isOpen())
	{
		this->update();
		this->render();
	}
}

//Functions
//void Game::mainMenu(){
//	cout << "Main Menu" << endl << endl;
//	cout << "0: Quit" << endl;
//	cout << "1: Travel" << endl;
//	cout << "2: Shop" << endl;
//	cout << "3: Level up" << endl;
//	cout << "4: Rest" << endl;
//	
//	cout << endl << "Choice: " << endl;
//	cin >> choice;
//	
//	switch (choice)
//	{
//	case 0:
//		playing = false;
//		break;
//
//	}
//
//}


