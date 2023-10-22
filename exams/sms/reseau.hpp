#ifndef RESEAU
#define RESEAU
#include <iostream>
#include <vector>
#include "telephone.hpp"
#include "mms.hpp"

class Telephone;
class Reseau
{
  private:
    std::vector<Telephone> liste;
    std::list<MMS*> mms;

  public:
    std::string lister() const;
    Telephone& trouveTel(std::string);
    void mmser(MMS*);
    void ajouter(std::string);
    Reseau() = default;
    ~Reseau() {
      for (MMS* mm : mms) {
        delete mm;
      }
    }
};

#endif
