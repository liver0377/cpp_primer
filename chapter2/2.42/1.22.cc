#include <iostream>
#include <string>

int main() {
  std::string isbn;
  std::string pre_isbn;
  int cnt;
  double price;
  double total = 0;
  while (std::cin >> isbn >> cnt >> price) {
    if (pre_isbn == isbn) {
      total += cnt * price;
    } else {
      if (pre_isbn != "") {
        std::cout << "isbn: " << pre_isbn << " revenue: " << total << std::endl;
      }
      total = price * cnt;
    }
    pre_isbn = isbn;
  }
  std::cout << "isbn: " << isbn << " revenue: " << total << std::endl;
  return 0;
}