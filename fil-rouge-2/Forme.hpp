#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"

// enum COULEURS { BLANC, NOIR};
// Force COULEURS::BLEU
enum class COULEURS {
  BLANC,
  NOIR,
  BLEU,
  ROUGE,
  VERT,
  JAUNE
};

class Forme {
  private:
    int id;
    Point p;
    COULEURS couleur;
    static int cptr;
    int w;
    int h;

  public:
    Forme();
    Forme(Point, COULEURS, int w = 0, int h = 0);
    virtual ~Forme();
    int getId() const;
    static int prochainId();
    Point getPoint() const;
    COULEURS getCouleur() const;
    void setX(int);
    void setY(int);
    void setCouleur(COULEURS);
    int getLargeur() const;
    int getHauteur() const;
    void setLargeur(int);
    void setHauteur(int);
    virtual Forme* clone() const;
    virtual std::string toString();
};

#endif
