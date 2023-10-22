#include "Forme.hpp"
#include <sstream>

int Forme::nbFormes = 0;

Forme::Forme(Point p, int w, int h): _p(p), _w(w), _h(h)
{
  nbFormes++;
}

Forme::Forme(int x, int y, int w, int h): Forme(Point(x, y), w, h)
{
}

Forme::Forme()
{
  nbFormes++;
}

int& Forme::w()
{
  return _w;
}

int& Forme::h()
{
  return _h;
}

Point& Forme::p()
{
  return _p;
}

int Forme::getNbFormes()
{
  return nbFormes;
}

std::string Forme::toString()
{
  std::ostringstream oss;
  oss << _p.toString() << ", " << _w << ", " << _h;
  return oss.str();
}
