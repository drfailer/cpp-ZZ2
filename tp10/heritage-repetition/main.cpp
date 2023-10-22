#include <iostream>

class A {
 public:
   void pouf() { std::cout << "pouf" << std::endl; }
   A() { std::cout << "A ";}
  ~A() { std::cout << "~A ";}
};

class B : virtual public A {
 public:
   B() { std::cout << "B "; }
  ~B() { std::cout << "~B ";}
};

class C : virtual public A {
 public:
   C() { std::cout << "C ";}
  ~C() { std::cout << "~C ";}
};

class D : public B, public C {
 public:
   void pouf() { std::cout << "pouf :D" << std::endl; }
   D() { std::cout << "D ";}
  ~D() { std::cout << "~D ";}
};

int main(int, char**) {
  D d;
  d.pouf();
  std::cout << "C'est Fini !";
  return 0 ;
}
