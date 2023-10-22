#include <iostream>

int main(int, char**)
{
  std::string s1, s2;
  std::cout << "entrer une chaine:" << std::endl;
  std::cin >> s1;
  std::cout << "entrer une autre chaine:" << std::endl;
  std::cin >> s2;

  if (s1 < s2) {
    std::cout << s1 << std::endl;
  }
  else {
    std::cout << s2 << std::endl;
  }

  return 0;
}
