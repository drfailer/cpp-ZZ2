#ifndef CHAMAN
#define CHAMAN
#include "Elfe.hpp"
#include "Sorcier.hpp"

class Chaman: public Elfe, public Sorcier
{
  public:
    void ensorceler() override {
      std::cout << "Magie !!!! mais sans parler :D" << std::endl;
    }
    Chaman(std::string nom): Elfe(nom), Sorcier() {}
    Chaman() = default;
    ~Chaman() = default;
};

#endif
