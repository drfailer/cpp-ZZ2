#ifndef ORC
#define ORC
#include "Individu.hpp"

class Orc: Individu
{
  public:
    Orc(std::string nom): Individu(nom, 5, 50, 10, 10, 0) {}
    Orc() = default;
    ~Orc() = default;
};

#endif
