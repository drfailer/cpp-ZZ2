#ifndef CITE_HPP
#define CITE_HPP
#include <list>
#include "individu.hpp"

class Personne;
class Cite
{
  private:
    std::list<Personne*> habitants;

  public:
    void ajouter(Personne* p) {
      habitants.push_back(p);
    }

    void supprimer(Individu* p) {
      // habitants.remove(p); // pasdebol :,)
      habitants.remove_if([p](Individu* pp) { return p->getId() == pp->getId(); });
    }

    int size() {
      return habitants.size();
    }

    Cite() = default;
    ~Cite() = default;
};

extern Cite CITE;

#endif
