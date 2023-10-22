#ifndef __LISTE__
#define __LISTE__
#include "Formes.hpp"

constexpr int TAILLE = 100;

class Liste
{
  private:
    Cercle* cercles[TAILLE];
    int nb_c;
    Rectangle* rectangles[TAILLE];
    int nb_r;
    static int compteur;

  public:
    Liste();
    int getCompteur();
    std::string toString();
    void ajoutList(Rectangle*);
    void ajoutList(Cercle*);
};

#endif
