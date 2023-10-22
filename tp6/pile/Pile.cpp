#include "Pile.hpp"
#include <stdexcept>

Pile::Pile(): Pile(10)
{
}

Pile::~Pile()
{
  delete tab;
}

Pile::Pile(int capacity): capacity(capacity), topIndex(0)
{
  if (capacity <= 0)
    throw std::invalid_argument("il faut utiliser une capacité positive !!");
  tab = new int[capacity];
}

bool Pile::empty() const
{
  return topIndex == 0;
}

int Pile::pop()
{
  if (topIndex == 0)
    throw std::invalid_argument("on ne peux pas dépiler une pile vide");
  return tab[--topIndex];
}

int Pile::top() const
{
  if (topIndex <= 0)
    throw std::invalid_argument("pile vide");
  return tab[topIndex - 1];
}

void Pile::push(int n)
{
  tab[topIndex++] = n;
}

int Pile::size() const
{
  return topIndex;
}

