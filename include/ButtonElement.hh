#pragma once
#include<SFML/Graphics.hpp>

class ButtonElement
{
private:
  float width{}, height{};
  float posX{}, posY{};
  sf::Color borderColor{};
  sf::Color fillColor{};
  float borderSize{};
  sf::RenderWindow* window{};

  sf::RectangleShape* buttonShape{};
public:
  ButtonElement(sf::RenderWindow*& window, float width, float height, float posX, float posY,
  sf::Color borderColor, sf::Color fillColor, float borderSize);
  ~ButtonElement();

  void Draw();
  void Update();
};