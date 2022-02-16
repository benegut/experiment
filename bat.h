#ifndef BAT_H
#define BAT_H

#include <SFML/Graphics.hpp>


class Bat{

private:
  sf::Vector2f position;
  sf::RectangleShape batShape;
  float batSpeed = 0.5;

public:
  Bat(float, float);
  sf::FloatRect getPosition();
  sf::RectangleShape getShape();
  void moveLeft();
  void moveRight();
  void update();

};


#endif
