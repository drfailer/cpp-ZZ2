#ifndef __A__
#define __A__
#include "B.hpp"

class B;

class A
{
  private:
    int i;

  public:
    void exec(int);
    void send(B* b);
    A(int);
};
#endif // !__A__
