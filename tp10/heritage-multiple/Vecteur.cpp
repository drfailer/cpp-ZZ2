#include "Vecteur.hpp"
#include <cstring>
#include <exception>
#include <stdexcept>

Vecteur::Vecteur() : Vecteur(10) {}

Vecteur::Vecteur(int capacite) : capacite(capacite), size(0) {
  tab = new int[capacite];
}

Vecteur::Vecteur(const Vecteur &v) : Vecteur(v.capacite) {
  memcpy(tab, v.tab, capacite*sizeof(int));
}

Vecteur::~Vecteur() { delete[] tab; }

void Vecteur::push_back(int value) {
  if (size + 1 >= capacite) {
    capacite *= 2;
    int *tmp = tab;
    tab = new int[capacite];
    memcpy(tab, tmp, size*sizeof(int));
    delete[] tmp;
  }
  tab[size++] = value;
}

void Vecteur::pop_back(int) {
  if (size > 0) {
    size--;
  } // todo: throw exception
}

int Vecteur::back() {
  if (!tab || size <= 0) {
    throw 1; // todo: créer une exception
  }
  return tab[size - 1];
}

int &Vecteur::operator[](int i) {
  if (i < 0) {
    throw std::out_of_range("index out of range");
  }
  else if (i > capacite) {
    capacite = i + 1;
    int * tmp = tab;
    tab = new int[capacite];
    memcpy(tab, tmp, capacite*sizeof(int));
    delete[] tmp;
  }
  if (i > size) {
    size = i+1;
  }
  return tab[i];
}

const int &Vecteur::operator[](int i) const {
  if (i < 0 || i >= size) {
    throw std::out_of_range("index out of range");
  }
  return tab[i];
}

bool Vecteur::empty() { return size == 0; }

const Vecteur &Vecteur::operator=(const Vecteur &v) {
  if (&v != this) {
    delete[] tab;
    size = v.size;
    capacite = v.capacite;
    tab = new int[capacite];
    memcpy(tab, v.tab, size*sizeof(int));
  }
  return v;
}

int Vecteur::getCapacite() const { return capacite; }

int Vecteur::getSize() const { return size; }
