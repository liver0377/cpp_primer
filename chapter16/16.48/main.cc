#include <iostream>
#include <sstream>
#include <string>

using std::string;

template <typename T>
string debug_rep(const T &t) {
    std::cout << "debug_rep(const T &t)" << std::endl;
    std::ostringstream ret;
    ret << t;
    return ret.str();
}

template <typename T>
string debug_rep(T *p) {
    std::cout << "debug_rep(T *p) " << std::endl;
    std::ostringstream ret;
    ret << "pointer: " << p;
    if (p)
        ret << " " << debug_rep(*p);
    else
        ret << " null pointer ";

    return ret.str();
}

string debug_rep(char *p) {
    std::cout << "debug_rep(char *p)" << std::endl;
    return debug_rep(string(p));
}

string debug_rep(const char *p) {
    std::cout << "debug_rep(const char *p)" << std::endl;
    return debug_rep(string(p));
}

int main() {
    debug_rep("hello world");
    int a = 10000;
    debug_rep(&a);
}
