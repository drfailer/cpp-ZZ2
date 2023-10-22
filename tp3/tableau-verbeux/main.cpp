#include <iostream>

class Bavarde {
  private:
    int v;

  public:
    int getV();
    void afficher();
    Bavarde(int v = 0);
    ~Bavarde();
} bizarre(1);

void Bavarde::afficher()
{
  std::cout << v << std::endl;
}

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

int main(int, char **) {
  const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];

  for (int i =0; i < TAILLE; ++i)
  {
     tab1[i].afficher();
     tab2[i].afficher();
  }
  delete[] tab2;
  return 0;
}
