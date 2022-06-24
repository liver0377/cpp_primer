#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> ans;
  int t;
  while (cin >> t) {
    ans.push_back(t);
  }
  for (auto &r : ans) {
    cout << r << " ";
  }
  return 0;
}