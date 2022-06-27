#include <iostream>

using namespace std;

bool container_upper(const string& s) {
    for (auto& e: s) {
        if (isupper(e)) {
            return true;
        }
    }
    return false;
}

int main() {
      cout << container_upper("Hello") << endl;

      return 0;
}