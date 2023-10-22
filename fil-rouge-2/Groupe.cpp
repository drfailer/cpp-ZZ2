#include "Groupe.hpp"
#include "Forme.hpp"
#include <sstream>

Groupe::Groupe(): Forme()
{
}

Groupe::Groupe(Point p, int w, int h): Forme(p, COULEURS::BLEU, w, h)
{
}

Groupe::~Groupe()
{
  for (Forme *f : content) {
    delete f;
  }
}

void Groupe::ajouterList(Forme* f)
{
  // Vérification du point X
  int xmin_f = f->getPoint().getX();
  int xmin = Forme::getPoint().getX();
  if (xmin_f < xmin) {
    Forme::setX(xmin);
    Forme::setLargeur(Forme::getLargeur() + xmin - xmin_f);
  }

  // Vérification du point Y
  int ymin_f = f->getPoint().getY();
  int ymin = Forme::getPoint().getY();
  if (ymin_f < ymin) {
    Forme::setY(ymin);
    Forme::setHauteur(Forme::getHauteur() + ymin - ymin_f);
  }

  // Vérification de la largeur
  int xmax_f = f->getPoint().getX() + f->getLargeur();
  int xmax = Forme::getPoint().getX() + Forme::getLargeur();
  if (xmax_f > xmax) {
    Forme::setLargeur(Forme::getLargeur() + xmax_f - xmax);
  }

  // Vérification de la hauteur
  int ymax_f = f->getPoint().getY() + f->getHauteur();
  int ymax = Forme::getPoint().getY() + Forme::getHauteur();
  if (ymax_f > ymax) {
    Forme::setHauteur(Forme::getHauteur() + ymax_f - ymax);
  }

  content.push_back(f);
}

std::string Groupe::toString()
{
  std::ostringstream oss;

  for (Forme* f : content) {
    oss << f->toString() << std::endl;
  }

  return oss.str();
}

Groupe* Groupe::clone() const
{
  Groupe* newGroup = new Groupe(Forme::getPoint(), Forme::getLargeur(),
      Forme::getHauteur());

  for (Forme* f : content) {
    newGroup->ajouterList(f->clone());
  }

  return newGroup;
}

