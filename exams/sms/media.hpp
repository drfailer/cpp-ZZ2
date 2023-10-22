#ifndef MEDIA
#define MEDIA
#include <string>

class Media {
  public:
    virtual std::string afficher() const = 0;
    virtual ~Media() = 0;
};

#endif
