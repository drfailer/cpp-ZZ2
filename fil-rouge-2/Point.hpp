#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__
#include <iostream>

class Point
{
  private:
    int x;
    int y;

  public:
    Point(int, int);
    Point();
    int getX() const;
    int getY() const;
    void setX(int);
    void setY(int);
    std::string toString() const;
};

const Point ORIGINE;

// declaration d'un point ORIGINE
// il ne faudra pas oublier de l'instancier quelque part
// extern Point ORIGINE;

#endif
