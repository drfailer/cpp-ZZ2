#ifndef __PILE__
#define __PILE__
#include <iostream>

template<typename T>
class Pile
{
  private:
    T *tab;
    int capacity;
    int topIndex;

  public:
    Pile();
    Pile(int);
    bool empty() const;
    int size() const;
    T top() const;
    void pop() noexcept;
    void push(T);
    ~Pile();
};

template<typename T>
Pile<T>::Pile(): Pile(10)
{
}

template<typename T>
Pile<T>::~Pile()
{
  delete tab;
}

template<typename T>
Pile<T>::Pile(int capacity): capacity(capacity), topIndex(0)
{
  if (capacity <= 0)
    throw std::invalid_argument("il faut utiliser une capacité positive !!");
  tab = new T[capacity];
}

template<typename T>
bool Pile<T>::empty() const
{
  return topIndex == 0;
}

template<typename T>
void Pile<T>::pop() noexcept
{
  if (topIndex > 0)
    --topIndex;
}

template<typename T>
T Pile<T>::top() const
{
  if (topIndex <= 0)
    throw std::invalid_argument("pile vide");
  return tab[topIndex - 1];
}

template<typename T>
void Pile<T>::push(T n)
{
  tab[topIndex++] = n;
}

template<typename T>
int Pile<T>::size() const
{
  return topIndex;
}

#endif
