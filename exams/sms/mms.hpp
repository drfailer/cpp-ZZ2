#ifndef __MMS
#define __MMS
#include <list>
#include "sms.hpp"
#include "media.hpp"

class MMS: public SMS
{
  private:
    std::list<Media*> pieceJointe;

  public:
    void joindre(Media* media);
    std::string afficher() const override;
    MMS(std::string expediteur, std::string destinataire, std::string texte):
      SMS(expediteur, destinataire, texte) {}
    ~MMS() {
      for (Media * m : pieceJointe) {
        delete m;
      }
    }
};

#endif
