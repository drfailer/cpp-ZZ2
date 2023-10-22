#ifndef IMAGE
#define IMAGE
#include "media.hpp"

class Image: public Media
{
  public:
    std::string afficher() const override { return "[[image]]"; }
    Image() = default;
    ~Image() = default;
};

#endif
