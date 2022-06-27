#include <iostream>
#include <string>

using namespace std;

int main() {
  string l, r;

  cout << "请输入两个字符串" << endl;

  while (cin >> l >> r) {
    cout << (l.size() < r.size() ? l : r) << endl;
  }

  return 0;
}