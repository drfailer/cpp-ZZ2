#include <iostream>
#include <string>


int main(void)
{
  std::string prenom;
  int age;

  std::cout << "prenom:" << std::endl;
  std::cin >> prenom;
  std::cout << "age:" << std::endl;
  std::cin >> age;

  std::cout << "prenom: " << prenom << ", age: " << age << std::endl;

  return 0;
}
