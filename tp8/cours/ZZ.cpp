#include "ZZ.hpp"
#include <sstream>

std::ostream& operator<<(std::ostream& os, const ZZ& zz) {
  os << zz.nom << " " << zz.prenom << ": " << zz.note;
  return os;
}
