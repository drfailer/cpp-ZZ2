#include <iostream>

/******************************************************************************/
/*                                    Mere                                    */
/******************************************************************************/

class Mere
{
  private:
    int n;
    static int cpt;
    std::string nom;

  public:
    int getCompteur();
    std::string getNom();
    void afficher();
    Mere(int, std::string);
    Mere(std::string);
    ~Mere();
};

int Mere::cpt = 0;

int Mere::getCompteur()
{
  return cpt;
}

std::string Mere::getNom()
{
  return nom;
}

void Mere::afficher()
{
  std::cout << "Mere !!!" << std::endl;
}

Mere::Mere(int n, std::string nom): n(n), nom(nom)
{
  std::cout << "Construct Mere" << std::endl;
  cpt++;
  std::cout << cpt << std::endl;
}

Mere::Mere(std::string nom): Mere(0, nom)
{
}


Mere::~Mere()
{
  std::cout << "Destruct Mere" << std::endl;
}

/******************************************************************************/
/*                                   Fille                                    */
/******************************************************************************/

class Fille: public Mere
{
  public:
    void afficher();
    Fille(int, std::string);
    Fille(std::string);
    ~Fille();
};

void Fille::afficher()
{
  std::cout << "Fille !!!" << std::endl;
}

Fille::Fille(int n, std::string nom): Mere(n, nom)
{
  std::cout << "Construct Fille" << std::endl;
}

Fille::Fille(std::string nom): Mere(nom)
{
  std::cout << "Construct Fille" << std::endl;
}


Fille::~Fille()
{
  std::cout << "Destruct Fille" << std::endl;
}

/******************************************************************************/
/*                                    main                                    */
/******************************************************************************/

int main(int, char**)
{
  Mere  *pm = new Mere("mere_dyn");
  Fille *pf = new Fille("fille_dyn");
  Mere  *pp = new Fille("fille vue comme mere");
  pm->afficher(); // affiche Mere
  pf->afficher(); // affiche Fille
  pp->afficher(); // affiche Fille
  delete pm;
  delete pf;
  delete pp;
  return 0;
}
