#include <iostream>

using namespace std;

int main() {
   int a[] = {1, 2, 3, 4, 5};

   cout << *begin(a) << *(end(a) - 1) << endl;


   return 0;
}