#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s;
  string ans, pre;
  int len = 0;
  int cnt = 1;
  while (cin >> s) {
    if (s == pre) {
      cnt++;
    } else if (cnt > len) {
      ans = pre;
      len = cnt;
      cnt = 1;
    }
    pre = s;
  }

  if (cnt > len) {
    len = cnt;
    ans = s;
  }

  cout << ans << " " << len << endl;
}