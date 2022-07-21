#ifndef FUNCTION_H
#define FUNCTION_H

class Function {
  public:
    int operator()(int v1, int v2, int v3);
};

int Function::operator()(int v1, int v2, int v3) { return v1 >= 0 ? v2 : v3; }

#endif