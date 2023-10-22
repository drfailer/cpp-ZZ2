#include "catch.hpp"
#include <cstring>
#include <sstream> // a mettre en commentaire
#include <stdexcept>
#include "Vecteur.hpp"

TEST_CASE("Constructeur par defaut") {
   Vecteur c;
   CHECK( 10 == c.getCapacite()); // capacite par defaut
}

TEST_CASE("Verification des const sur les accesseurs") {
   const Vecteur c;
   CHECK( 10 == c.getCapacite());
}

TEST_CASE("Constructeur avec capacite") {
    Vecteur c1(6);
    CHECK( 6 == c1.getCapacite());

    // Verifier que la liberation memoire est bien faite
}

TEST_CASE("Constructeur de copie") {
    Vecteur s1(10);   // une chaine vide
    Vecteur s2 = s1;  // une autre chaine vide

    CHECK( s1.getCapacite() == s2.getCapacite());
    // tous les problemes vont venir de la
    // j'ai converti en void * uniquement pour l'affichage de catch
}

TEST_CASE("operateur d'affectation") {
	Vecteur s1(5);
    Vecteur s2(10);

    s1 = s2;
    CHECK( s1.getCapacite() == s2.getCapacite());
    s1 = s1; // est ce que cela va survivre a l execution ?
}

TEST_CASE("Surcharge []") {
    Vecteur v2(5);
    Vecteur *v3 = new Vecteur();

    v2[1] = 3;
    v2[6] = 4;
    (*v3)[4] = 5;

    CHECK(v2[1] == 3);
    CHECK(v2[6] == 4);
    CHECK((*v3)[4] == 5);
    delete v3;
}

TEST_CASE("Surcharge +") {

    /* CHECK(ss1.str() == "patate hello, world !"); */
    /* CHECK(ss2.str() == "patate hello, world ! pouf patate"); */
}

TEST_CASE("exceptions aux bornes") {
  Vecteur v(10);

  REQUIRE_THROWS_AS( v[-1] == 0, std::out_of_range);
  // REQUIRE_THROWS_AS( v[12] == 0, std::out_of_range);  // pas d'exception
}
