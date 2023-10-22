#include "telephone.hpp"
#include <stdexcept>
#include <iostream>

void Telephone::textoter(std::string destinataire, std::string texte)
{
  try {
    messages.push_back(new SMS(numero, destinataire, texte));

    // mise à jour du destinataire
    Telephone * dest = &reseau->trouveTel(destinataire);
    if (dest != this)
      dest->messages.push_back(new SMS(numero, destinataire, texte));
  } catch (std::invalid_argument& e) {
    std::cout << e.what() << std::endl;
  }
}

void Telephone::mmser(std::string destinataire, MMS* mms)
{
  mms->setDestinataire(destinataire);
  mms->setExpediteur(numero);
  messages.push_back(new SMS(numero, destinataire, mms->getTexte()));
  try { // mise à jour du destinataire
    Telephone * dest = &reseau->trouveTel(destinataire);
    if (dest != this)
      dest->messages.push_back(new SMS(numero, destinataire, mms->getTexte()));
  } catch (std::invalid_argument& e) {
    std::cout << e.what() << std::endl;
  }
  reseau->mmser(mms);
}

