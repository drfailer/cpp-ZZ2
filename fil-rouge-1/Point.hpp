#ifndef __POINT__
#define __POINT__
#include <iostream>

class Point
{
  private:
    int _x;
    int _y;

  public:
    Point(int, int);
    Point();
    int& x();
    int& y();
    std::string toString();
};

#endif
