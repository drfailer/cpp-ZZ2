#ifndef __VECTEUR__
#define __VECTEUR__
#include <cstring>
#include <stdexcept>

template<typename T>
class Vecteur {
private:
  T *tab;
  int  capacite;
  int  size;

public:
  int            getSize() const;
  int            getCapacite() const;
  void           push_back(T);
  void           pop_back();
  int            back();
  T           &operator[](int);
  const T     &operator[](int) const;
  const Vecteur &operator=(const Vecteur &);
  bool           empty();
  Vecteur();
  Vecteur(int);
  Vecteur(const Vecteur &);
  ~Vecteur();
  friend Vecteur operator+(const Vecteur &a, const Vecteur& b) {
    Vecteur nouv(a.capacite + b.capacite);
    nouv.size = a.size + b.size;
    memcpy(nouv.tab, a.tab, a.size*sizeof(T));
    memcpy(nouv.tab + a.size, b.tab, b.size*sizeof(T));
    return nouv;
  }
};

template<typename T>
Vecteur<T>::Vecteur() : Vecteur(10) {}

template<typename T>
Vecteur<T>::Vecteur(int capacite) : capacite(capacite), size(0) {
  tab = new T[capacite];
}

template<typename T>
Vecteur<T>::Vecteur(const Vecteur &v) : Vecteur(v.capacite) {
  size = v.size;
  memcpy(tab, v.tab, capacite*sizeof(T));
}

template<typename T>
Vecteur<T>::~Vecteur() { delete[] tab; }

template<typename T>
void Vecteur<T>::push_back(T value) {
  if (size + 1 >= capacite) {
    capacite *= 2;
    int *tmp = tab;
    tab = new T[capacite];
    memcpy(tab, tmp, size*sizeof(int));
    delete[] tmp;
  }
  tab[size++] = value;
}

template<typename T>
void Vecteur<T>::pop_back() {
  if (size > 0) {
    size--;
  } // todo: throw exception
}

template<typename T>
int Vecteur<T>::back() {
  if (!tab || size <= 0) {
    throw 1; // todo: créer une exception
  }
  return tab[size - 1];
}

template<typename T>
T &Vecteur<T>::operator[](int i) {
  if (i < 0 || i >= size) {
    throw std::out_of_range("index out of range");
  }
  else if (i > capacite) {
    capacite = i + 1;
    int * tmp = tab;
    tab = new int[capacite];
    memcpy(tab, tmp, capacite*sizeof(int));
    delete tmp;
  }
  return tab[i];
}

template<typename T>
const T &Vecteur<T>::operator[](int i) const {
  if (i < 0 || i >= size) {
    throw std::out_of_range("index out of range");
  }
  return tab[i];
}

template<typename T>
bool Vecteur<T>::empty() { return size == 0; }

template<typename T>
const Vecteur<T> &Vecteur<T>::operator=(const Vecteur<T> &v) {
  if (&v != this) {
    delete tab;
    size = v.size;
    capacite = v.capacite;
    tab = new int[capacite];
    memcpy(tab, v.tab, size*sizeof(int));
  }
  return v;
}

template<typename T>
int Vecteur<T>::getCapacite() const { return capacite; }

template<typename T>
int Vecteur<T>::getSize() const { return size; }

#endif
