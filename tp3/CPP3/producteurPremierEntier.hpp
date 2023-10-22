#ifndef __PRODUCTEURPREMIERENTIER__
#define __PRODUCTEURPREMIERENTIER__
#include "producteur.hpp"
#include <iostream>

class ProducteurPremierEntier: public Producteur
{
  public:
    virtual bool produire(int, std::string) override;
    virtual int getTravail() override;
    ProducteurPremierEntier();
};


#endif
