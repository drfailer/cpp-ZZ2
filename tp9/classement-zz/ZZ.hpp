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
    std::string getPrenom() const { return prenom; }
    std::string getNom() const { return nom; }
    friend std::ostream& operator<<(std::ostream&, const ZZ&);
    bool operator<(const ZZ& zz) const {
      return nom != zz.nom && nom < zz.nom || prenom < zz.prenom;
    }
    bool operator<(const ZZ* zz) const {
      return nom != zz->nom && nom < zz->nom || prenom < zz->prenom;
    }
    double getNote() const { return note; }
    ZZ(std::string nom, std::string prenom, double note):
      nom(nom), prenom(prenom), note(note) {}
    ZZ() = default;
    ~ZZ() = default;
};

std::ostream& operator<<(std::ostream&, const ZZ&);

template<typename T>
bool sup(const T& zz1, const T& zz2) {
  return !(zz1 < zz2);
}

#endif
