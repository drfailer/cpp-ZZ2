#ifndef __SMS
#define __SMS
#include "message.hpp"

class SMS: public Message
{
  public:
    std::string afficher() const override { return Message::getTexte(); }
    SMS(std::string expediteur, std::string destinataire, std::string texte):
      Message(expediteur, destinataire, texte) {}
    ~SMS() = default;
};

#endif
