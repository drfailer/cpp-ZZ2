#ifndef INDIVIDU
#define INDIVIDU
#include <iostream>

class Individu {
private:
  std::string nom;
  int         intelligence;
  int         force;
  int         vitesse;
  int         vitalite;
  int         magie;

protected:
  Individu(std::string nom, int intelligence, int force, int vitesse,
           int vitalite, int magie)
      : nom(nom), intelligence(intelligence), force(force), vitesse(vitesse),
        vitalite(vitalite), magie(magie) {}
  Individu() = default;
  ~Individu() = default;
};

#endif
