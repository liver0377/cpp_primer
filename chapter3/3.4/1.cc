#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == s2) {
    cout << "Equal!  Result: " << s1 << endl;
  } else {
    cout << "Not Equal!  Result: " << (s1 > s2 ? s1 : s2) << endl;
  }
  return 0;
}