#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (auto iter = v.begin(); iter != v.end(); iter++) {
    *iter *= 2;
  }
  for (auto &r : v) {
    cout << r << " ";
  }
  cout << endl;
  return 0;
}