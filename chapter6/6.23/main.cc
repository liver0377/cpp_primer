#include <algorithm>
#include <iostream>

using namespace std;

void tmp1(int, int *) {}
void tmp2(int, int[]) {}
void tmp3(int, int[10]) {}

int main() {
  int a = 10;
  int b[] = {1, 2, 3};

  tmp1(a, b);
  tmp2(a, b);
  tmp3(a, b);

  return 0;
}