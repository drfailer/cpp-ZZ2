#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void test1() {
  std::vector<int> v;
  int input;

  while (std::cin >> input) {
    v.push_back(input);
  }

  std::cout << "begin: " << v.begin().base() << std::endl;
  std::cout << "end: " << v.end().base() << std::endl;

  std::sort(v.begin(), v.end());

  for (std::vector<int>::iterator it = v.begin(); it < v.end(); ++it) {
    std::cout << *it << std::endl;
  }
}

void test2() {
  std::vector<int> v;
  int input;

  while (std::cin >> input) {
    v.push_back(input);
  }
  std::sort(v.begin(), v.end());
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\n"));
}

void test3() {
  std::vector<int> v;

  // comment marche le end ?
  std::copy(std::istream_iterator<int>(std::cin), std::istream_iterator<int>(),
      std::back_insert_iterator<std::vector<int>>(v));

  std::sort(v.begin(), v.end());

  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\n"));
}

void test4() {
  std::vector<int> v1;
  std::vector<int> v2;
  std::istream_iterator<int> start(std::cin);
  std::istream_iterator<int> end;

  // comment marche le end ?
  std::copy(start, end,
      std::back_insert_iterator<std::vector<int>>(v1));

  std::sort(v1.begin(), v1.end());

  std::copy(v1.begin(), v1.end(), std::back_insert_iterator<std::vector<int>>(v2));
  std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout, "\n"));
}

int main(int, char**)
{
  test4();
  return 0;
}
