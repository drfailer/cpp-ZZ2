#include "producteurPremierEntier.hpp"
#include <fstream>

ProducteurPremierEntier::ProducteurPremierEntier()
{
  travail = 0;
}

bool ProducteurPremierEntier::produire(int quantite, std::string nom) {
  travail++;
  std::fstream fichier(nom, std::ios::out);
  bool output;

  if (fichier) {
    fichier << quantite << std::endl;
    output = true;
    for (int i = 1; i <= quantite; ++i) {
      fichier << i << std::endl;
    }
  }
  else {
    output = false;
  }
  return output;
}

int ProducteurPremierEntier::getTravail()
{
  return travail;
}
