#include <iostream>

class A { /* ... */
};
class B : public A { /* ... */
};
class C : public B { /*...*/
};

int main() {
    C cobj;
    A& ra = cobj;
    std::cout << typeid(&ra).name() << std::endl;
}