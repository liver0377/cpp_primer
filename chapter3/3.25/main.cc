#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v(11, 0);
    auto iter_v = v.begin(); 
    
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            (*(iter_v + grade / 10)) ++;
        }
    }
    
    for (auto& r: v) {
        cout << r << " ";
    }
    cout << endl;
    return 0;
}