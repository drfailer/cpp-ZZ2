#include <iostream>

class Mere {
 public:
  Mere() { m(); }
  virtual void m() { std::cout << "mm" << std::endl; }
  virtual ~Mere() {}
};

class Fille : public Mere {
 public:
  Fille() { m(); }
  virtual void m() { std::cout << "mf" << std::endl; }
  virtual ~Fille() {}
};

int main(int, char**)
{
  Fille f;
  f.m();
  std::cout << "--------------------------------" << std::endl;
  Mere *f2 = new Fille();
  f2->m();
  delete f2;
  return 0;
}
