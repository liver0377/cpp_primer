#include "Sales_item.h"
#include <iostream>
#include <map>
#include <string>

int main() {
  Sales_item item;
  std::map<std::string, int> mp;
  while (std::cin >> item) {
    mp[item.isbn()]++;
  }
  for (auto &r : mp) {
    std::cout << r.first << " occurs " << r.second << " times " << std::endl;
  }
  return 0;
}