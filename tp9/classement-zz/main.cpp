#include "ZZ.hpp"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <utility>
#include <vector>

struct Comparator {
  bool operator()(ZZ zz1, ZZ zz2) { return zz1.getNote() > zz2.getNote(); }
};

void question123() {
  std::vector<ZZ> v;
  // NOTE: ne marche pas avec une liste comme conteneur
  std::priority_queue<ZZ, std::vector<ZZ>, Comparator> queue1;
  std::priority_queue<ZZ>                              queue2;

  v.push_back(ZZ("pif", "paf", 20));
  v.push_back(ZZ("jean", "dupon", 17));
  v.push_back(ZZ("père", "castor", 4));
  v.push_back(ZZ("albus", "dumbledore", 18));

  for (ZZ &zz : v) {
    queue1.push(zz);
    queue2.push(zz);
  }

  while (!queue1.empty()) {
    std::cout << queue1.top() << std::endl;
    queue1.pop();
  }
  std::cout << "-------------------------" << std::endl;
  while (!queue2.empty()) {
    std::cout << queue2.top() << std::endl;
    queue2.pop();
  }
}

void question4() {
  std::map<std::string, ZZ> map;

  map.insert(std::pair<std::string, ZZ>("pif", ZZ("pif", "paf", 20)));
  map.insert(std::pair<std::string, ZZ>("jean", ZZ("jean", "dupon", 17)));
  map.insert(std::pair<std::string, ZZ>("père", ZZ("père", "castor", 4)));
  map.insert(std::pair<std::string, ZZ>("albus", ZZ("albus", "dumbledore", 18)));

  transform(map.rbegin(), map.rend(), std::ostream_iterator<ZZ>(std::cout, "\n"),
            [](std::pair<std::string, ZZ> p) { return p.second; });
}

int main(int, char **) {
  /* question123(); */
  question4();

  return 0;
}
