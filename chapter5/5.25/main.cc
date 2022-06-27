#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
  double a, b;

  while (cin >> a >> b)
    try {
      if (b == 0) {
        throw runtime_error("divisor can't be zero");
      }
      cout << a / b << endl;
    } catch (runtime_error err) {
      cout << err.what() << "\nTry Again? Enter y or n" << endl;

      char c;
      cin >> c;
      if (!cin || c == 'n') {
        break;
      }
    }

  return 0;
}