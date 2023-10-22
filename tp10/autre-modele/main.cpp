#include <iostream>
#include <vector>
#include "Chaman.hpp"
#include "Sorcier.hpp"
#include "Mage.hpp"

int main(int, char**)
{
  std::vector<Sorcier*> sorciers;
  sorciers.push_back(new Mage("albus"));
  sorciers.push_back(new Chaman("poufpouf"));
  for (Sorcier* s : sorciers) {
    s->ensorceler();
  }
  for (Sorcier* s : sorciers) {
    delete s;
  }
  return 0;
}
