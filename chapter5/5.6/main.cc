#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
  for (int g; cin >> g;) {
    string letter;
    letter = g < 60 ? scores[0] : scores[(g - 50) / 10];
    letter += g == 100 || g < 60 ? "" : g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";

    cout << letter << "  ";
  }
  cout << endl;
  return 0;
}