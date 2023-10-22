#include "Liste.hpp"
#include <sstream>

int Liste::compteur = 0;

Liste::Liste(): nb_c(0), nb_r(0)
{
  compteur++;
}

std::string Liste::toString()
{
  std::ostringstream oss;

  // cercles
  oss << "cercles: [";
  for (int i = 0; i < nb_c; ++i)
    oss << cercles[i]->toString() << ", ";
  oss << nb_c << "], ";

  // rectangles
  oss << "rectangles: [";
  for (int i = 0; i < nb_r; ++i)
    oss << rectangles[i]->toString() << ", ";
  oss << nb_c << "]";

  return oss.str();
}

int Liste::getCompteur()
{
  return compteur;
}

void Liste::ajoutList(Cercle* c)
{
  c->ordre() = nb_c;
  cercles[nb_c++] = c;
}

void Liste::ajoutList(Rectangle* r)
{
  r->ordre() = nb_r;
  rectangles[nb_r++] = r;
}
