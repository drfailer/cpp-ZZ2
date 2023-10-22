#include "personne.hpp"

std::ostream& operator<<(std::ostream& os, const Personne& personne) {
  personne.afficher(os);
  return os;
}
