#include <string>

class A {
   int a;
};

class B: public A {
    void f() {
        A::a;
    } 
};

int main() {
    B b;
    
}