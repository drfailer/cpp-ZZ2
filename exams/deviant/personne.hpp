#ifndef PERSONNE_HPP
#define PERSONNE_HPP
#include "individu.hpp"
#include "cite.hpp"
#include <string>

class Personne: public Individu
{
  private:
    std::string nom;

  public:
    void setNom(std::string nom) { this->nom = nom; }
    std::string getNom() const { return nom; }

    TYPE getType() const override { return TYPE::PERSONNE; }

    void afficher(std::ostream& os) const override {
      os << nom << " ";
      Individu::afficher(os);
    }

    void supprimer() {
      CITE.supprimer(this);
    }

    Personne(std::string nom): nom(nom) {
      CITE.ajouter(this);
    }
    Personne(): Personne("inconnu") {}
    ~Personne() {
      CITE.supprimer(this);
    }
};

std::ostream& operator<<(std::ostream& os, const Personne& personne);

#endif
