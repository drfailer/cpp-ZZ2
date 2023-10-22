#ifndef __CPP4__RECTANGLE_HPP__
#define __CPP4__RECTANGLE_HPP__

#include "Forme.hpp"

class Rectangle: public Forme
{

  public:
    Rectangle();
    Rectangle(Point, int, int);
    std::string toString() override;
    Rectangle* clone() const override;
};

#endif
