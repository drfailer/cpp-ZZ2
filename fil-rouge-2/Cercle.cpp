#include "Cercle.hpp"
#include "Forme.hpp"
#include <sstream>

Cercle::Cercle(): Cercle(Point(0,0),0,0,0)
{
}

Cercle::Cercle(Point p, int r, int w, int h):
  Forme(p, COULEURS::BLEU, w, h), r(r)
{
}

void Cercle::setRayon(int r)
{
  this->r = r;
}

int Cercle::getRayon()
{
  return r;
}

std::string Cercle::toString()
{
  std::ostringstream oss;
  oss << "CERCLE " << Forme::toString() << ", " << r;
  return oss.str();
}

Cercle* Cercle::clone() const
{
  return new Cercle(Forme::getPoint(), r, Forme::getLargeur(), Forme::getHauteur());
}

