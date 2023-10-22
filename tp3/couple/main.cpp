#include "Bavarde.hpp"
#include <cstdlib>

/******************************************************************************/
/*                                   Couple                                   */
/******************************************************************************/

class Couple
{
  private:
    Bavarde b1;
    Bavarde b2;

  public:
    Couple(int, int);
    ~Couple();
};

Couple::Couple(int v1, int v2)
{
  b1 = Bavarde(v1);
  b2 = Bavarde(v2);
}

Couple::~Couple()
{
  std::cout << "destruction couple" << std::endl;
}

/******************************************************************************/
/*                                  Famille                                   */
/******************************************************************************/

class Famille
{
  private:
    Bavarde* membres;
    int taille;

  public:
    Famille(int);
    ~Famille();
};

Famille::Famille(int taille): taille(taille)
{
  membres = new Bavarde[taille];
}

Famille::~Famille()
{
  delete[] membres;
}

/******************************************************************************/
/*                                    main                                    */
/******************************************************************************/

/*
 * le malloc et le free n'appelent pas les constructeur et destructeurs de la
 * classe.
 */

int main(int, char**)
{
  /* Couple c(1,2); */
  /* Famille f(5); */
  /* Bavarde *b = (Bavarde*)malloc(sizeof(Bavarde)); */
  /* b->afficher(); */
  /* free(b); */
  Famille *f2 = (Famille*)malloc(sizeof(Famille));
  free(f2);
  /* Bavarde *b = new Bavarde(); */
  /* b->afficher(); */
  /* delete b; */
  return 0;
}
