#include <iostream>

using namespace std;

class NoDefault {
  public:
    NoDefault(int x) : a(x) {}
    
  private:
    int a;
};

class C {
  public:
    C(int x = 10) : nd(x) {}

  private:
    NoDefault nd;
};

int main() {
    C c;
    return 0;
}