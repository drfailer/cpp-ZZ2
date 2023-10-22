#ifndef HUMANOIDE
#define HUMANOIDE
#include <iostream>
#include "Humain.hpp"
#include "Machine.hpp"

class Humanoide: public Humain, public Machine
{
  public:
    Humanoide(std::string nom, std::string type, GENRES genre, int age):
      Humain(nom, genre, age), Machine(type, 1000000, 3) {}
    Humanoide() = default;
    ~Humanoide() = default;
};

#endif
