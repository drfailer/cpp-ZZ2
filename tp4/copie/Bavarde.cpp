#include "Bavarde.hpp"

void Bavarde::afficher()
{
  std::cout << v << std::endl;
}

// constructeur de copie
Bavarde::Bavarde(const Bavarde& b)
{
  std::cout << "COPIE" << std::endl;
}

Bavarde::~Bavarde()
{
  std::cout << "Tait toit  " << v << std::endl;
}

int Bavarde::getV()
{
  return v;
}

Bavarde::Bavarde(int v): v(v)
{
  std::cout << "Construction de: " << v << std::endl;
}
