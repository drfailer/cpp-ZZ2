#include "ZZ.hpp"
#include <iostream>
#include <queue>
#include <vector>

void question1() {
  std::vector<ZZ> v;
  std::priority_queue<ZZ> queue;

  v.push_back(ZZ("pif", "paf", 20));
  v.push_back(ZZ("jean", "dupon", 17));
  v.push_back(ZZ("père", "castor", 4));
  v.push_back(ZZ("albus", "dumbledore", 18));

  for (ZZ& zz : v)
    queue.push(zz);

  while (!queue.empty()) {
    std::cout << queue.top() << std::endl;
    queue.pop();
  }
}

int main(int, char**)
{
  std::vector<ZZ*> v;

  v.push_back(new ZZ("pif", "paf", 20));
  v.push_back(new ZZ("jean", "dupon", 17));
  v.push_back(new ZZ("père", "castor", 4));
  v.push_back(new ZZ("albus", "dumbledore", 18));

  for (ZZ* zz : v) {
    delete zz;
  }

  return 0;
}
