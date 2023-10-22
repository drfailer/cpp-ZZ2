#include <iostream>
#include "Point.hpp"

Point::Point(int x, int y): x(x), y(y) {
  std::cout << "Point(int, int)" << std::endl;
  compteur++;
}

Point::Point(): x(0), y(0) {
  std::cout << "Point()" << std::endl;
  compteur++;
}

int Point::getX() {
  return x;
}

void Point::setX(int newx) {
  x = newx;
}

int Point::getY() {
  return x;
}

void Point::setY(int newy) {
  y = newy;
}

void Point::deplacerDe(int incx, int incy) {
  x += incx;
  y += incy;
}

void Point::deplacerVers(int newx, int newy) {
  x = newx;
  y = newy;
}

void Point::afficher() {
  std::cout << "x: " << x << ", y: " << y << std::endl;
}

int Point::getCompteur() {
  return compteur;
}

void Point::testStatic()
{
  // marche pas :/
  /* std::cout << "x = " << x << std::endl; */
  std::cout << "hello" << std::endl;
}

int Point::compteur = 0;
