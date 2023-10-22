#include <cctype>
#include <ios>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iterator>

// abcd abc
struct Comparator {
  bool operator()(std::string a, std::string b) { // a inférieur à b
    return strcmp(a.c_str(), b.c_str()) < 0;
  }
};

struct UpperCase {
  void operator()(std::string& s) {
    std::for_each(s.begin(), s.end(), [](char& c) { c = std::toupper(c); });
  }
};

int main(int, char**)
{
  std::vector<std::string> v;
  v.push_back("hello");
  v.push_back("world");
  v.push_back("zz");
  v.push_back("abcd");
  std::sort(v.begin(), v.end(), Comparator());
  std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout,
        "\n"));
  std::for_each(v.begin(), v.end(), UpperCase());
  std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout,
        " "));
  std::cout << std::endl;
  return 0;
}
