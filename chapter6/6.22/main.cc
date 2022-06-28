#include <iostream>
#include <algorithm>

using namespace std;

void swp(int** pa, int** pb) {
     int *t = *pb;
     *pb = *pa;
     *pa = t;
}

int main() {
    int a = 1, b = 2;

    int *pa = &a, *pb = &b;
    cout << *pa << " " << *pb << endl;
    swp(&pa, &pb);
    cout << *pa << " " << *pb << endl;

    return 0;
}