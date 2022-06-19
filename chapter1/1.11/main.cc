#include <iostream>

int main() {
  int start, end;
  std::cin >> start >> end;
  if (start < end) {
    int t = start;
    start = end;
    end = start;
  }
  while (start <= end) {
    std::cout << start << " ";
    start++;
  }
  std::cout << std::endl;
  return 0;
}
