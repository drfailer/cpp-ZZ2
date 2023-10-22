#ifndef __VECTEUR__
#define __VECTEUR__

class Vecteur {
private:
  int *tab;
  int  capacite;
  int  size;

public:
  int            getSize() const;
  int            getCapacite() const;
  void           push_back(int);
  void           pop_back(int);
  int            back();
  int           &operator[](int);
  const int     &operator[](int) const;
  const Vecteur &operator=(const Vecteur &);
  bool           empty();
  Vecteur();
  Vecteur(int);
  Vecteur(const Vecteur &);
  ~Vecteur();
};

#endif
