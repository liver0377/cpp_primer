#include <iostream>
#include <typeinfo>

class A {
   public:
    virtual ~A() {}
};

class B : public A {};

class C : public B {};

class D : public B, public A {};

int main(int argc, char const *argv[]) {
    A *pa = new C;
    try {
        const C &c = dynamic_cast<const C &>(*pa);
    } catch (std::bad_cast &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}