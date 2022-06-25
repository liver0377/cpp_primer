#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int c = (int)0xFFFFE380;
  printf("%x\n", (c);
  printf("%x\n", ~c);
  return 0;
}