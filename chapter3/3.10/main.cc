#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  string ans;
  for (auto &c : s) {
    if (!ispunct(c)) {
      ans += c;
    }
  }
  cout << ans << endl;
  return 0;
}