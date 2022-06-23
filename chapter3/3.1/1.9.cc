#include <iostream>

using std::cout;
using std::endl;

int main() {
  int start = 50;
  int total = 0;
  while (start <= 100) {
    total += start;
    start++;
  }
  cout << total << endl;
  return 0;
}