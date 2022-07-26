#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

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

template <typename T>
ostream &print(ostream &os, const T &t) {
    return os << t;
}

template <typename T, typename... Args>
ostream &print(ostream &os, const T &t, const Args &... rest) {
    os << t << ", ";
    return print(os, rest...);
}

template <typename... Args>
std::ostream &errorMsg(std::ostream &os, const Args... rest) {
    return print(os, debug_rep(rest)...);
}

int main() { errorMsg(cout, "a", "b", "c"); }