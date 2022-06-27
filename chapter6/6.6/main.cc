#include <iostream>
#include <vector>

using namespace std;

int f(int a) {
   static int si = 0;
   si += a;
   return si;
}

int main() {
   vector<int> v = {1, 2, 3, 4, 5};
   for (auto& e: v) {
    cout << f(e) << endl;
   }
   
   return 0;
}