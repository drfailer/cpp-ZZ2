#include "individu.hpp"

int Individu::compteur = 0;

std::ostream& operator<<(std::ostream& os, const Individu& individu) {
  individu.afficher(os);
  return os;
}
