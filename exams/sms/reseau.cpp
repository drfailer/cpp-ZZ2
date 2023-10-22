#include <sstream>
#include <iterator>
#include <algorithm>
#include <exception>
#include "reseau.hpp"
#include "telephone.hpp"
#include "mauvaisNumero.hpp"

std::string Reseau::lister() const
{
  std::ostringstream oss;
  for (Telephone tel : liste) {
    oss << tel.getNumero() << "\n";
  }
  return oss.str();
}

void Reseau::ajouter(std::string numero)
{
  Telephone nouv(numero);
  nouv.setReseau(this);
  liste.push_back(nouv);
  std::sort(liste.begin(), liste.end());
}

Telephone& Reseau::trouveTel(std::string numero)
{
  for (Telephone& tel : liste) {
    if (tel.getNumero() == numero)
      return tel;
  }
  throw MauvaisNumero();
}

void Reseau::mmser(MMS* mm) {
  mms.push_back(mm);
}
