#ifndef TELEPHONE
#define TELEPHONE
#include <string>
#include <list>
#include "reseau.hpp"
#include "message.hpp"
#include "sms.hpp"
#include "mms.hpp"

class Reseau;
class SMS;
class Telephone
{
  private:
    std::string numero;
    Reseau *reseau;
    std::list<SMS*> messages;

  public:
    int getNbMessages() const { return messages.size(); }
    void setReseau(Reseau *reseau) { this->reseau = reseau; }
    Reseau* getReseau() const { return reseau; }
    void setNumero(std::string numero) { this->numero = numero; }
    std::string getNumero() const { return numero; }
    bool operator<(const Telephone& other) const { return numero < other.numero; }
    void textoter(std::string, std::string);
    void mmser(std::string, MMS*);
    Telephone(std::string numero): numero(numero), reseau(nullptr) {}
    Telephone(): Telephone("") {}
    ~Telephone() {
      for (SMS *sms : messages) {
        delete sms;
      }
    }
};

#endif
