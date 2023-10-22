#include "Bavarde.hpp"

/******************************************************************************/
/*                                   test1                                    */
/******************************************************************************/

// on a bien le message d'appel du constructeur de copy
void test1(Bavarde b) {
  std::cout << "appel de fonction avec parametre objet et copie";
}

/******************************************************************************/
/*                                   test2                                    */
/******************************************************************************/

/* On s'attend à avoir une copie au niveau de la sortie, hors ce n'est pas le
 * cas.
 */

Bavarde test2a() {
  std::cout << "appel de fonction avec retour";
  return Bavarde(); // creation d'un objet local
} // plus de copie - voir ZZ3

Bavarde test2b() {
  Bavarde b; // creation d'un objet local
  std::cout << "appel de fonction avec retour";
  return b;
} // plus de copie - ZZ3

/******************************************************************************/
/*                                   test3                                    */
/******************************************************************************/

/* Pas de construction quand on passe la ref (logique).
 */

void test3(Bavarde& b) {
  std::cout << "appel de fonction avec référence ";
}

/******************************************************************************/
/*                                   test4                                    */
/******************************************************************************/

void test4(Bavarde *b) {
  std::cout << "appel de fonction avec un pointeur sur un objet";
}

/******************************************************************************/
/*                                    main                                    */
/******************************************************************************/

int main(int, char**)
{
  /* test1 ----------------------------------------------------------------- */
  /* Bavarde b1(4); */
  /* test1(b1); */

  /* test2 ----------------------------------------------------------------- */
  /* Bavarde b2 = test2a(); */
  /* Bavarde b3 = test2b(); */

  /* test3 ----------------------------------------------------------------- */
  /* Bavarde b4; */
  /* test3(b4); */

  /* test4 ----------------------------------------------------------------- */
  /* Bavarde* b5 = new Bavarde(); */
  /* test4(b5); */
  /* delete b5; */


  return 0;
}
