#include "Point.hpp"
#include <sstream>

Point::Point(): Point(0, 0)
{
}

Point::Point(int x, int y): _x(x), _y(y)
{
}

int& Point::x()
{
  return _x;
}

int& Point::y()
{
  return _y;
}

std::string Point::toString()
{
  std::ostringstream oss;
  oss << "(" << _x << ", " << _y <<")";
  return oss.str();
}
