#include "bat.h"

Bat::Bat(float startX, float startY)
{
  Bat::position.x = startX;
  Bat::position.y = startY;

  Bat::batShape.setSize(sf::Vector2f(50, 5));
  Bat::batShape.setPosition(Bat::position);
}

sf::FloatRect Bat::getPosition()
{
  return Bat::batShape.getGlobalBounds();
}

sf::RectangleShape Bat::getShape()
{
  return Bat::batShape;
}

void Bat::moveLeft()
{
  Bat::position.x -= Bat::batSpeed;
}

void Bat::moveRight()
{
  Bat::position.x += Bat::batSpeed;
}

void Bat::update()
{
  Bat::batShape.setPosition(position);
}
