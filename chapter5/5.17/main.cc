#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {1, 2, 3};

    int i;
    for (i = 0; i < min(v1.size(), v2.size()); i++) {
       if (v1[i] != v2[i]) {
          break;
       } 
    }

    if (i == min(v1.size(), v2.size())) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;

    }
    return 0;
}