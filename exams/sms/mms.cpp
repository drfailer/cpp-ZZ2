#include <sstream>
#include "mms.hpp"

void MMS::joindre(Media* media)
{
  pieceJointe.push_back(media);
}

std::string MMS::afficher() const
{
  std::ostringstream oss;
  oss << SMS::afficher();

  for (Media *m : pieceJointe) {
    oss << m->afficher();
  }
  return oss.str();
}

