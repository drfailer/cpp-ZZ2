#ifndef VIDEO
#define VIDEO
#include "media.hpp"

class Video: public Media
{
  public:
    std::string afficher() const override { return "[[video]]"; }
    Video() = default;
    ~Video() = default;
};

#endif
