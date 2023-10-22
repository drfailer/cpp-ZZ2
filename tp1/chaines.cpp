#include <iostream>

int main() {

  char s[10]; // erreur: si la chaine à une taille supérieur à 10
  // std::string s; // erreur: si la chaine à une taille inférieur à 10
  // char *      s; // pas d'alloc => marche pas

  std::cin >> s;

  std::cout << "#" << s << "#" << std::endl;
  for (int i = 0; i< 10; ++i)
    std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;

  return 0;
}
