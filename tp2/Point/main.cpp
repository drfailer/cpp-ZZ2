#include <iostream>
#include "Point.hpp"

int main(int, char**)
{
  Point p0;
  Point p1(4, 4);
  Point p2 { 10, 10 };
  Point *p3 = new Point(1, 2);

  p0.afficher();
  p1.afficher();
  p1.deplacerDe(1, -1);
  p1.afficher();
  p1.deplacerVers(0, 0);
  p1.afficher();
  p2.afficher();
  p3->afficher();
  std::cout << p2.getCompteur() << std::endl;
  Point::testClass();
  // marche pas
  /* std::cout << p1.x << std::endl; */

  delete p3;

  return 0;
}
