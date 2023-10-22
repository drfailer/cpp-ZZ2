#include "Rectangle.hpp"
#include "Forme.hpp"
#include <sstream>

Rectangle::Rectangle(): Rectangle(Point(0,0), 0, 0)
{
}

Rectangle::Rectangle(Point p, int w, int h):
  Forme(p, COULEURS::BLEU, w, h)
{
}

std::string Rectangle::toString()
{
  std::ostringstream oss;
  oss << "RECTANGLE " << Forme::toString();
  return oss.str();
}

Rectangle* Rectangle::clone() const
{
  return new Rectangle(Forme::getPoint(), Forme::getLargeur(), Forme::getHauteur());
}

