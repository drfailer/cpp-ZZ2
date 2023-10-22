#ifndef HUMAIN
#define HUMAIN
#include "Individu.hpp"

class Humain: public Individu
{
  public:
    Humain(std::string nom): Individu(nom, 10, 10, 10, 10, 10) {}
    Humain() = default;
    ~Humain() = default;
};

#endif
