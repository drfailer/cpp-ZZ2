#include "template.hxx"

int main(int, char**) {
  Stats<int> is;

  is.push_back(3);
  is.push_back(4);
  is.push_back(2);
  is.compute();
  is.display();

  return 0;
}
