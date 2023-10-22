#ifndef HUMAIN
#define HUMAIN
#include <iostream>

enum GENRES {
  HOMME,
  FEMME,
  AUTRE
};

class Humain
{
  private:
    std::string nom;
    GENRES genre;
    int age;

  public:
    void setAge(int age) { this->age = age; }
    int getAge() const { return age; }
    void setGenre(GENRES genre) { this->genre = genre; }
    GENRES getGenre() const { return genre; }
    std::string getNom() const { return nom; }
    void setNom(std::string nom) { this->nom = nom; }
    Humain(std::string nom, GENRES genre, int age):
      nom(nom), genre(genre), age(age) {}
    Humain() = default;
    ~Humain() = default;
};

#endif
