//#include <iostream>
#include "Point.hpp"
#include <iostream>
#include <sstream>

Point::Point(): Point(0, 0)
{
}

Point::Point(int x, int y): x(x), y(y)
{
}

int Point::getX() const
{
  return x;
}

int Point::getY() const
{
  return y;
}

void Point::setX(int x)
{
  this->x = x;
}

void Point::setY(int y)
{
  this->y = y;
}

std::string Point::toString() const
{
  std::ostringstream oss;
  oss << "(" << x << ", " << y <<")";
  return oss.str();
}

//  NE PAS OUBLIER de définir ORIGINE
