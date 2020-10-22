#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <ctime>


#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

using namespace std;
class Game
{
public:

	//Constructors/Destructors
	Game();
	virtual ~Game();
	
	
	//Operators

	//Functions
	void updateSFMLEvents();
	void update();
	void render();
	void run();



	//Accessors

	//Modifiers
private:
	//Initialization
	void initWindow();


	//Variables
	sf::RenderWindow *window;
	sf::Event sfEvent;
};

#endif