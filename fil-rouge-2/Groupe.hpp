#ifndef __GROUPE__
#define __GROUPE__
#include "Forme.hpp"
#include <list>

class Groupe : public Forme
{
  private:
    std::list<Forme*> content;


  public:
    Groupe();
    Groupe(Point, int, int);
    ~Groupe();
    void ajouterList(Forme*);
    std::string toString();
    Groupe* clone() const override;
};

#endif
