#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string isbn;
  string pre_isbn;
  int cnt;
  double price;
  double total = 0;
  while (cin >> isbn >> cnt >> price) {
    if (pre_isbn == isbn) {
      total += cnt * price;
    } else {
      if (pre_isbn != "") {
        cout << "isbn: " << pre_isbn << " revenue: " << total << std::endl;
      }
      total = price * cnt;
    }
    pre_isbn = isbn;
  }
  cout << "isbn: " << isbn << " revenue: " << total << std::endl;
  return 0;
}