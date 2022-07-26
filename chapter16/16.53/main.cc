#include <iostream>

using std::ostream;
using std::cout;
using std::endl;

template <typename T>
ostream &print(ostream& os, const T &t) {
    return os << t;
}

template<typename T, typename ...Args>
ostream&  print(ostream& os, const T& t, const Args &...rest) {
    os << t << ", ";
    return print(os, rest...);
}

int main() {
    print(cout, "hello", 10, 8.3, 'a');
    cout << endl;
    print(cout, 8, 8.3);
    cout << endl;
}