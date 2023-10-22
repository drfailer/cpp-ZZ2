#include "Forme.hpp"
#include <ostream>
#include <sstream>

int Forme::cptr = 0;

Forme::Forme(): Forme(Point(), COULEURS::BLEU)
{
}

Forme::Forme(Point p, COULEURS couleur, int w, int h):
  id(cptr), p(p), couleur(couleur), w(w), h(h)
{
  cptr++;
}


Forme::~Forme() {}

int Forme::prochainId()
{
  return cptr;
}

int Forme::getId() const
{
  return id;
}

Point Forme::getPoint() const
{
  return p;
}

COULEURS Forme::getCouleur() const
{
  return couleur;
}

void Forme::setX(int x)
{
  p.setX(x);
}

void Forme::setY(int y)
{
  p.setY(y);
}

void Forme::setCouleur(COULEURS couleur)
{
  this->couleur = couleur;
}

int Forme::getLargeur() const
{
  return w;
}

int Forme::getHauteur() const
{
  return h;
}

void Forme::setHauteur(int h)
{
  this->h = h;
}

void Forme::setLargeur(int w)
{
  this->w = w;
}

std::ostream& operator<<(std::ostream &o, const COULEURS &c)
{
  switch (c) {
    case COULEURS::NOIR:
          o << "NOIR";
          break;
    case COULEURS::BLANC:
          o << "BLANC";
          break;
    case COULEURS::BLEU:
          o << "BLEU";
          break;
    case COULEURS::ROUGE:
          o << "ROUGE";
          break;
    case COULEURS::VERT:
          o << "VERT";
          break;
    case COULEURS::JAUNE:
          o << "JAUNE";
          break;
  }
  return o;
}

std::string Forme::toString()
{
  std::ostringstream oss;
  oss << p.toString() << ", " << couleur << ", " << w << ", " << h;
  return oss.str();
}

Forme* Forme::clone() const
{
  Forme* newForme = new Forme(p, couleur, w, h);
  return newForme;
}

