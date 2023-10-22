#ifndef SON
#define SON
#include "media.hpp"

class Son: public Media
{
  public:
    std::string afficher() const override { return "[[son]]"; }
    Son() = default;
    ~Son() = default;
};

#endif
