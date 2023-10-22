#ifndef __B__
#define __B__
#include "A.hpp"

class A;

class B
{
  private:
    int j;

  public:
    void exec(int);
    void send(A *a);
    B(int);
};
#endif // !__B__
