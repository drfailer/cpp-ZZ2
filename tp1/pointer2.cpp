#include <iostream>

int main(int, char**) {
   const int TAILLE = 500;

   int * p = new int[TAILLE];

   for(auto i = 0; i< TAILLE; ++i ) p[i] = i;
   for(auto i = 0; i< TAILLE; ++i ) std::cout << p[i] << std::endl;

   /* delete p; */ // marche pas
   delete [] p;

   return 0;
}

