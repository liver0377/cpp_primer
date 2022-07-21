#ifndef EQUAL_H
#define EQUAL_H

class Equal {
  public:
    bool operator()(int x, int y) { return x == y; }
};

#endif