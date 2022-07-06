#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(vector<string> &words) {
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
    cout << endl;
}

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    print(words);
    auto end_unique = unique(words.begin(), words.end());
    print(words);
    words.erase(end_unique, words.end());
    print(words);
}

bool isShorter(const string& a, const string& b) {
    return a.size() < b.size();
}

int main() {
    vector<string> v = {"the",  "quick", "red",  "fox", "jumps",
                        "over", "the",   "slow", "red", "turtle"};
    elimDups(v);
    stable_sort(v.begin(), v.end(), isShorter);
    print(v);
}