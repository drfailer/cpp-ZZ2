#include <iostream>

/******************************************************************************/
/*                                  Bavarde                                   */
/******************************************************************************/

class Bavarde {
  private:
    int v;

  public:
    int getV();
    Bavarde(int v = 0);
    ~Bavarde();
} bizarre(1); // instantiation après déclaration

Bavarde::~Bavarde()
{
  std::cout << "Tait toit  " << v << std::endl;
}

int Bavarde::getV()
{
  return v;
}

Bavarde::Bavarde(int v): v(v)
{
  std::cout << "Construction de: " << v << std::endl;
}

Bavarde globale(2);

void fonction(Bavarde b) {
  std::cout << "code de la fonction";
}

/******************************************************************************/
/*                                    main                                    */
/******************************************************************************/

int main(int, char **) {
  Bavarde b1(3);
  Bavarde b2(4);
  Bavarde * p = new Bavarde(5);
  fonction(b1);
  delete p;
  std::cout << Bavarde(0).getV() << std::endl;

  return 0;
}
