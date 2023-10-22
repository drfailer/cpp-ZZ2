#include "statisticien.hpp"
#include <fstream>

bool Statisticien::acquerir(std::string nom)
{
  std::fstream fichier(nom, std::ios::in);
  int n;
  int ligne;

  if (fichier) {
    calcul = true;
    somme = 0;
    fichier >> n;

    for (int i = 0;  i < n; ++i) {
      fichier >> ligne;
      somme += ligne;
    }
    moyenne = (double) somme / n;
  }
  else {
    calcul = false;
    std::cout << "Erreur: impossible d'ouvrir le fichier";
  }
  return calcul;
}
