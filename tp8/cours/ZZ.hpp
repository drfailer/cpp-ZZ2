#ifndef __ZZ__
#define __ZZ__
#include <string>

class ZZ
{
  private:
    std::string nom;
    std::string prenom;
    double note;

  public:
    friend std::ostream& operator<<(std::ostream&, const ZZ&);
    bool operator<(const ZZ& zz) const {
      return nom < zz.nom;
    }
    bool operator<(const ZZ* zz) const {
      return nom < zz->nom;
    }
    ZZ(std::string nom, std::string prenom, double note):
      nom(nom), prenom(prenom), note(note) {}
    ZZ() = default;
    ~ZZ() = default;
};

std::ostream& operator<<(std::ostream&, const ZZ&);

#endif
