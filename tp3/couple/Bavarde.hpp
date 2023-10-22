#ifndef __BAVARDE__
#define __BAVARDE__
#include <iostream>

class Bavarde {
  private:
    int v;

  public:
    int getV();
    void afficher();
    Bavarde(int v = 0);
    ~Bavarde();
};

#endif // !__BAVARDE__
