#ifndef INDIVIDU_HPP
#define INDIVIDU_HPP
#include <sstream>
#include "type.hpp"
#include "illegalException.hpp"

class Individu
{
  private:
    static int compteur;
    int id;

  public:
    static int getCompteur() { return compteur; }
    int getId() const { return id; }

    virtual TYPE getType() const { throw IllegalException(); }

    virtual void afficher(std::ostream& os) const {
      os << id;
    }

    Individu(): id(++compteur) {}
    virtual ~Individu() {}

  protected:
    void setId(int id) { this->id = id; }
};

std::ostream& operator<<(std::ostream& os, const Individu& individu);

#endif
