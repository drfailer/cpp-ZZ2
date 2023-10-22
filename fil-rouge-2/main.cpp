#include <iostream>
#include <cstring>
#include <sstream>
#include <limits>
#include "Groupe.hpp"
#include "Cercle.hpp"
#include "Rectangle.hpp"

void safeGet(int& v, bool& err) {
  if (!err && std::cin >> v) {
    err = true;
    std::cout << "Syntax error" << std::endl;
  }
}

// TODO: parserCommand -> enum COMMAND
// TODO: handlers for adding new forms

int main(int, char**)
{
  std::string userInput = "";
  bool run = true;
  int h, w, x, y, r = 0;
  bool error = false;
  Groupe *mainGroup = new Groupe();

  while (run) {
    std::cin >> userInput;

    if (userInput == "create") {
      std::cin >> userInput;
      if (std::cin >> x) {
        std::cout << "OK" << std::endl;
      }
      else {
        std::cout << "ERRRRRR" << std::endl;
      }
      std::cin >> y;
      std::cin >> h;

      // TODO: create group
      if (userInput == "cercle") {
        if (std::cin.get() == ' ')
          std::cin >> w;
        else
          r = h;
        std::cout << Cercle(Point(x, y), r, h, w).toString() << std::endl;
      }
      else if (userInput == "rectangle") {
        std::cin >> w;
        std::cout << Rectangle(Point(x, y), h, w).toString() << std::endl;
      }
      else if (userInput == "rectangle") {
        std::cin >> w;
        std::cout << Groupe(Point(x, y), h, w).toString() << std::endl;
      }
      else {
        error = true;
      }
    }
    else if (userInput == "quit" || userInput == "exit") {
      run = false;
    }
    else {
      error = true;
    }

    if (error) {
      error = false;
      std::cin.clear();
      std::cout << "error: unknown command" << std::endl;
    }
  }

  delete mainGroup;
  return 0;
}
