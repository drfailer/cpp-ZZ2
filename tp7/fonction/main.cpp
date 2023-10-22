#include <iostream>

template<typename T>
T maximum(T a, T b) {
  return (a > b)? a:b;
}

int main(int, char**)
{
  std::cout << maximum<int>(3, 4) << std::endl;
  std::cout << maximum<float>(4.1, 4.5) << std::endl;
  std::cout << maximum<int>(4, 3.5) << std::endl;
  // std::cout << maximum(4, 3.5) << std::endl; // ne marche pas sans le <int>
  std::cout << maximum<int>(4, (int)7.5) << std::endl;
  return 0;
}
