#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "ab2c3d7R4E6";
    string numbers = "0123456789";
    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // 1. 查找每个数字字符
    int idx = 0;
    while ((idx = s.find_first_of(numbers, idx)) != string::npos) {
        cout << "found number at index: " << idx << " element is " << s[idx]
             << endl;
        ++idx;
    }

    // 2. 查找每个字母字符
    idx = 0;
    while ((idx = s.find_first_of(letters, idx)) != string::npos) {
        cout << "found letter at index: " << idx << " element is " << s[idx]
             << endl;
        ++idx;
    }
}