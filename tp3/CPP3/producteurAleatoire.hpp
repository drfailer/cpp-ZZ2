#ifndef __PRODUCTEURALEATOIRE__
#define __PRODUCTEURALEATOIRE__
#include <string>
#include "producteur.hpp"

class ProducteurAleatoire: public Producteur
{
  public:
    virtual bool produire(int, std::string) override;
    virtual int getTravail() override;
    ProducteurAleatoire();
};


#endif
