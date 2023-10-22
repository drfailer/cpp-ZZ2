#ifndef __CPP4__CERCLE_HPP__
#define __CPP4__CERCLE_HPP__

#include "Forme.hpp"
#include "Point.hpp"

class Cercle: public Forme
{
  private:
    int r;

  public:
    Cercle();
    Cercle(Point, int, int, int);
    int getRayon();
    void setRayon(int);
    std::string toString() override;
    Cercle* clone() const override;
};

#endif
