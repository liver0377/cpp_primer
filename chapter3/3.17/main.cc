#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s;
  vector<string> v;
  while (cin >> s) {
    for (auto &r : s) {
      r = toupper(r);
    }
    v.push_back(s);
  }

  for (auto &r : v) {
    cout << r << " ";
  }
  cout << endl;
  return 0;
}