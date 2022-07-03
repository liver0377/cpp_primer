#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    auto iter1 = v.end();
    auto iter2 = v.end();
    cout << v.erase(iter1, iter2) - v.begin() << endl;

   for (auto &e: v) {
    cout << e << " ";
   }
   cout << endl;

   return 0;
}
