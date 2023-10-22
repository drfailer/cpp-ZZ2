#ifndef MESSAGE
#define MESSAGE
#include <string>
#include <stdexcept>

class Message
{
  private:
    std::string expediteur;
    std::string destinataire;
    std::string texte;
    int id;
    static int cle;

  public:
    void setDestinataire(std::string destinataire) { this->destinataire =
      destinataire; }
    void setExpediteur(std::string expediteur) { this->expediteur = expediteur;
    }
    std::string getA() const { return destinataire; }
    std::string getDe() const { return expediteur; }
    int getId() const { return id; }
    static int getCle() { return cle; }
    std::string getTexte() const { return texte; }
    void setTexte(std::string texte) { this->texte = texte; }
    virtual std::string afficher() const = 0;
    Message(std::string expediteur, std::string destinataire, std::string
        texte): expediteur(expediteur), destinataire(destinataire),
    texte(texte), id(cle) {
      cle++;
      if (texte.size() >= 160)
        throw std::invalid_argument("le message est trop long");
    }
    virtual ~Message() = 0;

};

#endif
