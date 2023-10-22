#include <iostream>

int main(int, char**)
{
  int * p = new int;
   *p = 3;
   std::cout << *p << std::endl;
   delete p;
  return 0;
}
