#include <iostream>

using std::cout;
using std::endl;

void absolute(int n) {
    cout << (n > 0 ? n : -n) << endl; 
}

int main() {
   int n = -1;
   absolute(n);
   return 0;
}