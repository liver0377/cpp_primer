#include <iostream>
#include <string>

using namespace std;

int main() {
  string t;
  string ans;

  while (cin >> t) {
    ans = ans + t + ' ';
  }
  cout << ans << endl;
  return 0;
}