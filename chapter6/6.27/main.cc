#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> list) {
    int sum = 0;
    for (const int& e: list) {
       sum += e;
    }

    return sum;
}

int main() {
     cout << sum({1, 2, 3, 4, 5, 7, 9}) << endl;

     return 0;
}