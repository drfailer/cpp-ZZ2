#include <iostream>

int main(void)
{
  int i;
  for (i = 0; i < 10; ++i)
    std::cout << "hello: " << i / 10.0 << std::endl;
  return 0;
}
