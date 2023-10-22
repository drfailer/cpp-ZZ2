#include <iostream>

class M {
 public:
   M() {
     std::cout << "M::M()" << std::endl;
   }
   ~M() {
     std::cout << "M::~M()" << std::endl;
   }
   M(const M&) {
     std::cout << "M::M(const M&)" << std::endl;
   }
   M& operator=(const M& m) {
     std::cout << "=M" << std::endl;
     return *this;
   }
};

class A {
  private:
    M m;

 public:
   A() {
     std::cout << "A::A()" << std::endl;
   }
   ~A() {
     std::cout << "A::~A()" << std::endl;
   }
   A(const A& a) {
     m = a.m;
     std::cout << "A::A(const A&)" << std::endl;
   }
   A& operator=(const A& m) {
     std::cout << "=A" << std::endl;
     return *this;
   }
};

class F : public M {
  public:
    F() {
      std::cout << "F::F()" << std::endl;
    }
    ~F() {
      std::cout << "F::~F()" << std::endl;
    }
    /* F(const F& f) { */
    /*   std::cout << "F::F(const F&)" << std::endl; */
    /* } */
   F& operator=(const F& f) {
     std::cout << "=F" << std::endl;
     return *this;
   }
};

int main(int, char**) {

  /* F f1; */
  /* F f2 = f1; */
  A a1;
  A a2 = a1;

  /* (M) f1 = f2; */

  return 0;
}
