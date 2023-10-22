#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <numeric>

struct Fibonacci {
  int fn;
  int fn1;
  int fn2;

  int operator()() {
    int output = fn2;
    fn = fn1 + fn2;
    fn2 = fn1;
    fn1 = fn;
    return output;
  }

  Fibonacci(): fn(0), fn1(1), fn2(0) {}
};

void question1() {
  std::vector<int> v;
  std::generate_n(std::back_insert_iterator<std::vector<int>>(v), 10, Fibonacci());
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\n"));
}

int main(int, char**)
{
  std::vector<int> v(100);
  std::iota(v.begin(), v.end(), 1);
  std::random_shuffle(v.begin(), v.end());
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\n"));
  std::cout << "---------------------------------" << std::endl;
  auto it = std::find(v.begin(), v.end(), 50);
  while (it != v.end()) {
    std::cout << *it << std::endl;
    it++;
  }
  return 0;
}
