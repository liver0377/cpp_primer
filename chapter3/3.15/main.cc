#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string t;
  vector<string> ans;
  while (cin >> t) {
    ans.push_back(t);
  }
  for (auto &r : ans) {
    std::cout << r << endl;
  }
  return 0;
}