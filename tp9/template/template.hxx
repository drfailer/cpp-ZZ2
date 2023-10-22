#ifndef __TEMPLATE__
#define __TEMPLATE__
#include <iostream>
#include <vector>

template <typename T> class Stats {
  std::vector<T> data;
  T              sum;
  double         moy;
  double         ecart;

public:
  Stats() : data(10), moy(.0) {}

  void push_back(const T &t) { data.push_back(t); }
  void compute() {
    if (data.size() > 0) {
      sum = data[0];
      for (int i = 1; i < data.size(); ++i) {
        sum += data[i];
      }
    }
    moy = sum / data.size();
    ecart = max(data.begin(), data.end()) - min(data.begin(),
        data.end());
  }
  void display(std::ostream &o = std::cout) const {
    std::cout << "moyenne: " << moy << std::endl;
    std::cout << "ecart: " << ecart << std::endl;
  }
};

#endif
