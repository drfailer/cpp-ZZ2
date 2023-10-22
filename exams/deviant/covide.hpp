#ifndef COVIDE_HPP
#define COVIDE_HPP
#include "deviant.hpp"
#include <queue>
#include <vector>

struct Comp {
  bool operator()(const Deviant* d1, const Deviant* d2) const {
    return d1->getObs() < d2->getObs();
  }
};

class Covid
{
  private:
    std::priority_queue<Deviant*, std::vector<Deviant*>, Comp> deviants;

  public:
    void push(Deviant& d) { deviants.push(&d); }
    Deviant& top() { return *deviants.top(); }
    void pop() { deviants.pop(); }
    Covid() = default;
    ~Covid() = default;
};

#endif
