#include "Cercle.hpp"
#include "Forme.hpp"

/* NOTE: pas de pointeur => pas de polymorphisme
 */

void afficher1(Forme f) {
   f.afficher();
}

void afficher2(Forme &f) {
   f.afficher();
}

void afficher3(Forme * f) {
   f->afficher();
}

int main(int, char**) {
   Cercle cercle;

   afficher1(cercle);
   afficher2(cercle);
   afficher3(&cercle);

   return 0;
}
