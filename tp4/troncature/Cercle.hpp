#ifndef __CERCLE__
#define __CERCLE__
#include "Forme.hpp"

class Cercle: public Forme
{
  public:
    Cercle() = default;
    void afficher() override;
};

#endif
