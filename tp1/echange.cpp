#include <iostream>

void echange(int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}

int main(int, char **)
{
  int  a = 3;
  int  b = a;
  int& c = a; // c et a sont la même variable avec 2 noms

  std::cout << a << " " << b << " " << c << std::endl;
  b = 4;
  std::cout << a << " " << b << " " << c << std::endl;
  c = 5;
  std::cout << a << " " << b << " " << c << std::endl;
  a = 6;
  std::cout << a << " " << b << " " << c << std::endl;

  std::cout << "-----------------------------------" << std::endl;
  a = 1;
  b = 2;
  std::cout << a << " " << b << std::endl;
  echange(a, b);
  std::cout << a << " " << b << std::endl;

  return 0;
}
