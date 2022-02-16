#include "ball.h"
#include <iostream>


Ball::Ball(float startX, float startY)
{
  Ball::position.x = startX;
  Ball::position.y = startY;

  Ball::ballShape.setSize(sf::Vector2f(10,10));
  Ball::ballShape.setPosition(Ball::position);
}

sf::FloatRect Ball::getPosition()
{
  return Ball::ballShape.getGlobalBounds();
}

sf::RectangleShape Ball::getShape()
{
  return Ball::ballShape;
}

float Ball::getXVelocity()
{
  return Ball::xVelocity;
}

void Ball::reboundSides()
{
  Ball::xVelocity = -Ball::xVelocity;
}

void Ball::reboundBatOrTop()
{
  Ball::position.y -= (Ball::yVelocity*30);
  Ball::yVelocity = -Ball::yVelocity;
}

void Ball::hitBottom()
{
  Ball::position.y = 1;
  Ball::position.x = 500;
}

void Ball::update()
{
  Ball::position.y += Ball::yVelocity;
  Ball::position.x += Ball::xVelocity;
  Ball::ballShape.setPosition(position);
}
