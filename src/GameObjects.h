#ifndef PLATFORMER_GAMEOBJECTS_H
#define PLATFORMER_GAMEOBJECTS_H

#include <SFML/Graphics.hpp>

class GameObject
{
	public:
		GameObject();
		virtual ~GameObject() = default;
		virtual void Update(float dt) = 0;
		virtual void render(sf::RenderWindow& window);
		void render(sf::RenderWindow& window, sf::Shader& shader);
		sf::Vector2f getPosition() const;
		sf::FloatRect getBounds() const;
		bool Intersects(const GameObject& other) const;
		bool getIsActive() { return is_active; };
		void setIsActive(bool active) { is_active = active; };
		sf::Sprite getSprite() const;
		void SetSpeed(float temp_speed) { speed = temp_speed; };
		float GetSpeed() { return speed; };


	private:
		bool is_active = true;
	protected: 
		float speed = 200.0f;
		sf::Texture texture;
		sf::Sprite sprite;
		bool initialiseSprite(const std::string& path);

};

#endif // PLATFORMER_GAMEOBJECTS_H