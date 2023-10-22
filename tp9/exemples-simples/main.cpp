#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <random>
#include <vector>

struct Rand_0_100 {
  int min;
  int max;
  int operator()() { return min + std::rand() % (abs(min) + abs(max)); }
  Rand_0_100(int min, int max) : min(min), max(max) {}
};

int main(int, char **) {
  std::vector<int> randoms1(100);
  std::vector<int> randoms2;
  std::generate(randoms1.begin(), randoms1.end(), Rand_0_100(0, 1000));
  std::copy(randoms1.begin(), randoms1.end(),
            std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  std::generate_n(std::back_insert_iterator<std::vector<int>>(randoms2), 100,
                  Rand_0_100(-100, 100));
  std::copy(randoms2.begin(), randoms2.end(),
      std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  int sum1 = std::accumulate(randoms1.begin(), randoms1.end(), 0);
  int sum2 = std::accumulate(randoms2.begin(), randoms2.end(), 0);
  std::cout << "-------------------------------" << std::endl;
  std::cout << "mean1: "  << sum1 / randoms1.size() << std::endl;
  std::cout << "mean2: "  << sum2 / randoms2.size() << std::endl;
  std::cout << "-------------------------------" << std::endl;

  std::vector<int>::iterator min1 = std::min_element(randoms1.begin(), randoms1.end());
  std::vector<int>::iterator min2 = std::min_element(randoms2.begin(), randoms2.end());
  std::vector<int>::iterator max1 = std::max_element(randoms1.begin(), randoms1.end());
  std::vector<int>::iterator max2 = std::max_element(randoms2.begin(), randoms2.end());
  std::cout << "randoms1: "  <<  *min1 << ", " << *max1 << std::endl;
  std::cout << "randoms2: "  <<  *min2 << ", " << *max2 << std::endl;
  return 0;
}
