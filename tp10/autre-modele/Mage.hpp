#ifndef MAGE
#define MAGE
#include "Humain.hpp"
#include "Sorcier.hpp"

class Mage: public Humain, public Sorcier
{
  public:
    void ensorceler() override {
      std::cout << "Magie !!!!" << std::endl;
    }
    Mage(std::string nom): Humain(nom), Sorcier() {}
    Mage() = default;
    ~Mage() = default;
};

#endif
