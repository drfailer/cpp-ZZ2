#ifndef MAUVAISNUMERO
#define MAUVAISNUMERO
#include <stdexcept>

class MauvaisNumero: public std::invalid_argument
{
  public:
    MauvaisNumero(): std::invalid_argument("mauvais numero") {}
};

#endif
