#include <iostream>
#include <vector>

int main() {
   std::vector<int> v= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   for (auto& e: v) {
      e = (e % 2) ? e * 2 : e;
   }
   for (auto& e : v) {
     std::cout << e << " ";
   }
   std::cout << std::endl;
   return 0;
}