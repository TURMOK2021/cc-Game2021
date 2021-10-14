#pragma once
#include<SFML/Graphics.hpp>
#include"Rigidbody.hh"

class GameObject
{
private:
  sf::Sprite* sprite{};
  sf::Vector2f position{};
  float scale{};
  float width{};
  float height{};
  sf::Texture* texture;
  sf::RenderWindow* window{};
  Rigidbody* rigidbody{};
public:
    GameObject();
  GameObject(const char* textureUrl, sf::Vector2f position, float scale, float width, float height, int col, int row, sf::RenderWindow*& window, b2World*& world);
  ~GameObject();
  virtual void Update(float& deltaTime);
  virtual void Draw();
  };