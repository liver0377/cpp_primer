#include <iostream>

using namespace std;

void swap(int *pa, int *pb) {
    int t = *pb;
    *pb = *pa;
    *pa = t;
}

int main() {
   int a = 10, b = 11;

   swap(&a, &b);
   cout << a << " " << b << endl;
   
   return 0;
}