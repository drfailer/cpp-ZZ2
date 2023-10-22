#ifndef __CPP3_STATISTICIEN_HPP__
#define __CPP3_STATISTICIEN_HPP__

#include <iostream>

class Statisticien
{
  private:
    bool calcul;
    int somme;
    double moyenne;

  public:
    bool acquerir(std::string);
};

#endif
