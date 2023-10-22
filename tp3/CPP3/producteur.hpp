#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur {
  protected:
    int travail;

  public:
    virtual bool produire(int, std::string) = 0;
    virtual int getTravail() = 0;
    virtual ~Producteur() = 0;
};

#endif
