#include "Formes.hpp"
#include <sstream>

/******************************************************************************/
/*                                 Rectangle                                  */
/******************************************************************************/

Rectangle::Rectangle(int x, int y, int w, int h): x(x), y(y), w(w), h(h)
{
}

std::string Rectangle::toString()
{
  std::ostringstream oss;
  oss << x << " " << y << " " << w << " " << h;
  return oss.str();
}

int& Rectangle::ordre()
{
    return _ordre;
}

/******************************************************************************/
/*                                   Cercle                                   */
/******************************************************************************/

Cercle::Cercle(int x, int y, int w, int h): x(x), y(y), w(w), h(h)
{
}

Cercle::Cercle(int cx, int cy, int rayon):
  x(cx - rayon), y(cy - rayon), w(2*rayon), h(2*rayon)
{
}

std::string Cercle::toString()
{
  std::ostringstream oss;
  oss << x << " " << y << " " << w << " " << h;
  return oss.str();
}

int& Cercle::ordre()
{
    return _ordre;
}

