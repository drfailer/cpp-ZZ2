#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>
#include <fstream>

const std::string &first(const std::pair<std::string, std::string> &p) {
  return p.first;
}

void displayMap(std::map<std::string, std::string> liste) {

  std::map<std::string, std::string>::iterator it = liste.begin();
  while (it != liste.end()) {
    std::cout << it->first << " " << it->second << std::endl;
    ++it;
  }
}

void displayKeys(std::map<std::string, std::string> liste) {
  transform(liste.begin(), liste.end(),
            std::ostream_iterator<std::string>(std::cout, " "), first);
}

std::vector<std::string> values(std::map<std::string, std::string> map) {
  std::vector<std::string> vector;

  std::transform(map.begin(), map.end(),
      std::back_insert_iterator<std::vector<std::string>>(vector)
      , [](std::pair<std::string, std::string> p) { return p.second; });

  return vector;
}

std::map<std::string, std::string> lectureFichier(std::string fileName) {
  std::map<std::string, std::string> map;
  std::fstream fs(fileName);

  transform(std::istream_iterator<std::string>(fs),
      std::istream_iterator<std::string>(),
      std::insert_iterator<std::map<std::string, std::string>>(map, map.begin()),
      [](std::string line) {
        std::string key = line.substr(0, line.find(';'));
        std::string value = line.substr(line.find(';') + 1, line.size() - 1);
        return std::pair<std::string, std::string>(key, value);
      });

  return map;
}

void test() {
  std::vector<std::string> v;
  std::map<std::string, std::string> liste;
  std::map<std::string, std::string> liste2;
  liste.insert(std::pair<std::string, std::string>("loic", "405042"));
  liste.insert(std::make_pair("pierre", "405033"));
  liste.insert(std::make_pair("SOS C++ 24/7", "407662"));
  liste["secours"] = "42";

  // test de la copie
  std::copy(liste.begin(), liste.end(),
      std::insert_iterator<std::map<std::string, std::string>>(liste2, liste2.begin()));
  std::cout << "liste2:" << std::endl;
  displayMap(liste2);

  std::cout << "values:" << std::endl;
  v = values(liste);
  for (std::string& s : v) {
    std::cout << s << std::endl;
  }
}

int main(int argc, char **argv) {
  std::map<std::string, std::string> list;
  std::map<std::string, std::string> list_inv;
  list = lectureFichier("test.txt");

  transform(list.begin(), list.end(),
      std::insert_iterator<std::map<std::string, std::string>>(list_inv, list_inv.begin()),
      [](std::pair<std::string, std::string> p) {
        return std::pair<std::string, std::string>(p.second, p.first);
      });

  if (argc == 2) {
    std::map<std::string, std::string>::iterator it =
      list.find(argv[1]);
    if (it != list.end()) {
      std::cout << it->first << ": " << it->second << std::endl;
    }
    else {
      std::cout << "non trouvé" << std::endl;
    }
  }
  else {
    std::cout << "list:" << std::endl;
    displayMap(list);
    std::cout << "list_inv:" << std::endl;
    displayMap(list_inv);
  }


  return 0;
}
