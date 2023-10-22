#include "catch.hpp"
#include <cstring>
#include <sstream> // a mettre en commentaire
#include <stdexcept>
#include <iostream>
#include "Vecteur.hpp"

TEST_CASE("Constructeur par defaut") {
   Vecteur<int> c;
   CHECK( 10 == c.getCapacite()); // capacite par defaut
}

TEST_CASE("Verification des const sur les accesseurs") {
   const Vecteur<int> c;
   CHECK( 10 == c.getCapacite());
}

TEST_CASE("Constructeur avec capacite") {
    Vecteur<int> c1(6);
    CHECK( 6 == c1.getCapacite());

    // Verifier que la liberation memoire est bien faite
}

TEST_CASE("Constructeur de copie") {
    Vecteur<int> s1(10);   // une chaine vide
    Vecteur<int> s2 = s1;  // une autre chaine vide

    CHECK( s1.getCapacite() == s2.getCapacite());
    // tous les problemes vont venir de la
    // j'ai converti en void * uniquement pour l'affichage de catch
}

TEST_CASE("operateur d'affectation") {
	Vecteur<int> s1(5);
    Vecteur<int> s2(10);

    s1 = s2;
    CHECK( s1.getCapacite() == s2.getCapacite());
    s1 = s1; // est ce que cela va survivre a l execution ?
}

TEST_CASE("Surcharge []") {
    Vecteur<int> v2(5);
    Vecteur<int> *v3 = new Vecteur<int>();

    v2.push_back(3);
    v3->push_back(5);

    CHECK(v2[0] == 3);
    REQUIRE_THROWS_AS(v2[6] == 4, std::out_of_range);
    CHECK((*v3)[0] == 5);
    delete v3;
}

TEST_CASE("Surcharge +") {

    /* CHECK(ss1.str() == "patate hello, world !"); */
    /* CHECK(ss2.str() == "patate hello, world ! pouf patate"); */
}

TEST_CASE("exceptions aux bornes") {
  Vecteur<int> v(10);

  REQUIRE_THROWS_AS( v[-1] == 0, std::out_of_range);
  // REQUIRE_THROWS_AS( v[12] == 0, std::out_of_range);  // pas d'exception
}

TEST_CASE("test +") {
  Vecteur<int> v1(10);
  Vecteur<int> v2(10);
  Vecteur<int> v3(10);

  for (int i = 0; i < 3; ++i) {
    v1.push_back(i);
    v2.push_back(i + 3);
  }
  CHECK(v1.getSize() == 3);
  CHECK(v2.getSize() == 3);
  v3 = v1 + v2;
  CHECK(v3.getSize() == 6);

  for (int i = 0; i < 6; ++i) {
    CHECK(v3[i] == i);
  }
}
