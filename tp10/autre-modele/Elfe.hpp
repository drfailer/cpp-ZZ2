#ifndef ELFE
#define ELFE
#include "Individu.hpp"

class Elfe: Individu
{
  public:
    Elfe(std::string nom): Individu(nom, 20, 20, 20, 20, 20) {}
    Elfe() = default;
    ~Elfe() = default;
};

#endif
