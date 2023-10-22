#ifndef MACHINE
#define MACHINE
#include <iostream>

class Machine
{
  private:
    std::string type;
    long autonomie;
    int ifixit;

  public:
    void setIfixit(int ifixit) { this->ifixit = ifixit; }
    int getIfixit() const { return ifixit; }
    void setAutonomie(long autonomie) { this->autonomie = autonomie; }
    long getAutonomie() const { return autonomie; }
    void setType(std::string type) { this->type = type; }
    std::string getType() const { return type; }
    Machine(std::string type, long autonomie, int ifixit):
      type(type), autonomie(autonomie), ifixit(ifixit) {}
    Machine() = default;
    ~Machine() = default;
};

#endif
