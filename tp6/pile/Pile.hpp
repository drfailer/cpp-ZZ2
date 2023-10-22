#ifndef __PILE__
#define __PILE__

class Pile
{
  private:
    int *tab;
    int capacity;
    int topIndex;

  public:
    Pile();
    Pile(int);
    bool empty() const;
    int size() const;
    int top() const;
    int pop();
    void push(int);
    ~Pile();
};

#endif
