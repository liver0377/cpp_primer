#include <iostream>
#include <vector>

using namespace std;

int f(int, int);
using F = int(*)(int, int);

int f1(int a, int b) {
    return a + b;
}

int f2(int a, int b) {
    return a - b;
}

int f3(int a, int b) {
    return a * b;
}

int f4(int a, int b) {
    return a / b;
}

int main() {
   vector<F> v;
   v.push_back(f1);
   v.push_back(f2);
   v.push_back(f3);
   v.push_back(f4);

   int a = 6, b = 2;
   for (int i = 0; i < 4; i++) {
    cout << v[i](a, b) << " ";
   }

   return 0;
}