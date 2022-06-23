#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int idx = 0;
  while (idx < s.size()) {
    s[idx] = 'X';
    idx ++;
  }
  cout << s << endl;
  return 0;
}
