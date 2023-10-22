#include "producteurAleatoire.hpp"
#include <fstream>
#include <iostream>
#include<ctime>
#include<cstdlib>

ProducteurAleatoire::ProducteurAleatoire()
{
  travail = 0;
}

bool ProducteurAleatoire::produire(int quantite, std::string nom) {
  travail++;
  std::fstream fichier(nom, std::ios::out); // creation d'un fstream
  bool output;
  std::srand(std::time(nullptr)); // importé depuis les lib c

  if (fichier) {
    output = true;
    fichier << quantite;
    for (int i = 0; i < quantite; ++i) {
      fichier << std::rand();
    }
  }
  else {
    output = false;
  }
  return output;
}

int ProducteurAleatoire::getTravail()
{
  return travail;
}
