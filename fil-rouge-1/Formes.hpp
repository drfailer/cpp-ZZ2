#ifndef __FORMES__
#define __FORMES__
#include <iostream>
#include <string>
#include <sstream>

/******************************************************************************/
/*                                 Rectangle                                  */
/******************************************************************************/

class Rectangle
{
  private:
    int x;
    int y;
    int w;
    int h;
    int _ordre;

  public:
    Rectangle(int x, int y, int w, int h);
    std::string toString();
    int& ordre();
};

/******************************************************************************/
/*                                   Cercle                                   */
/******************************************************************************/

class Cercle
{
  private:
    int x;
    int y;
    int w;
    int h;
    int _ordre;

  public:
    Cercle(int x, int y, int w, int h);
    Cercle(int cx, int xy, int rayon);
    std::string toString();
    int& ordre();
};

#endif // !__FORMES__
