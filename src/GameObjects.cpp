#include "GameObjects.h"
#include <iostream>

GameObject::GameObject()
{

}

bool GameObject::initialiseSprite(const std::string& path)
{
	if (!texture.loadFromFile(path)) 
	{
		std::cout << "ERROR SPRITE NOT LOADED - " << path << "\n";
	}
	
		
	
	sprite.setTexture(texture);
	sprite.setScale(1, 1);
	return true;
}

void GameObject::render(sf::RenderWindow& window) 
{
		window.draw(sprite);
}

void GameObject::render(sf::RenderWindow& window, sf::Shader& shader) 
{
	window.draw(sprite, &shader);
}

sf::Sprite GameObject::getSprite() const
{
	return sprite;
}


sf::FloatRect GameObject::getBounds() const
{
	return sprite.getGlobalBounds();
}



sf::Vector2f GameObject::getPosition()const 
{
	return sprite.getPosition();
} 

bool GameObject::Intersects(const GameObject& other) const
{
	return getBounds().intersects(other.getBounds());
}
