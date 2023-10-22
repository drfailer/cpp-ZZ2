#ifndef __POINT__
#define __POINT__

class Point {
  private:
    int x;
    int y;
    static int compteur;

  public:
    int getX();
    void setX(int);
    int getY();
    void setY(int);
    void deplacerDe(int,int);
    void deplacerVers(int,int);
    void afficher();
    int getCompteur();
    static void testStatic();
    Point(int,int);
    Point();
};

#endif // !__POINT__
