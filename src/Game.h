
#ifndef PLATFORMER_GAME_H
#define PLATFORMER_GAME_H

#include <SFML/Graphics.hpp>

class Game
{
	public:
		Game(sf::RenderWindow& window);
		~Game();
		bool init();
		void update(float dt);
		void render();

	private:
		sf::RenderWindow& window;


};

#endif // PLATFORMER_GAME_H
