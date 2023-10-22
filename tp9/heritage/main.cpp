#include <iostream>

template<class T>
class Mere {
 protected:
  T a;
 public:
  Mere(T t):a(t) {}
  void f() { std::cout << a ; }
};

template<class T>
class Fille : public Mere<T> {
 public:
  Fille(T t): Mere<T>(t) {}
  void m() {
       Mere<T>::a = Mere<T>::a*Mere<T>::a;
       Mere<T>::f();
     }
};

int main(int, char**)
{
  Mere<int> *f = new Fille<int>(1);
  delete f;
  return 0;
}
