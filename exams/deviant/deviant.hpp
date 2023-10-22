#ifndef __deviant_hpp__
#define __deviant_hpp__

#include <iostream>
#include <stdexcept>
#include <vector>
// completer la liste suivant vos besoins
#include "cite.hpp"
#include "individu.hpp"
#include "personne.hpp"
#include "type.hpp"

// Utiliser une des versions de Cite
// #define CITE Cite::getCite()

class Deviant : public Individu
{
  private:
    std::string obs;

  public:
    void setObs(std::string obs) { this->obs = obs; }
    std::string getObs() const { return obs; }

    TYPE getType() const override { return TYPE::DEVIANT; }

    bool operator<(const Deviant &deviant) const {
      return obs < deviant.obs;
    }

    Deviant(Personne p, std::string obs): obs(obs) {
      p.supprimer();
      Individu::setId(p.getId());
    }
    Deviant(Personne p) : Deviant(p, "") {}
    ~Deviant() = default;
};

#endif
