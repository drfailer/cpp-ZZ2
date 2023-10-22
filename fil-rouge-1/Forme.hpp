#ifndef __FORME__
#define __FORME__
#include "Point.hpp"
#include <iostream>

class Forme
{
  private:
    Point _p;
    int _w;
    int _h;
    static int nbFormes;

  public:
    Forme();
    Forme(int,int,int,int);
    Forme(Point,int,int);
    static int getNbFormes();
    std::string toString();
    Point& p();
    int& w();
    int& h();
};

#endif
