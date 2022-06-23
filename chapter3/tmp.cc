#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  const string s = "keep out";
  for (auto &c : s) {
    cout << c << endl;
  }
  return 0;
}
