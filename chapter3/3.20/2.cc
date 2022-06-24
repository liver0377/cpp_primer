#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  int t;
  while (cin >> t) {
    v.push_back(t);
  }
  for (int i = 0; i <= v.size() / 2; i++) {
    cout << v[i] + (i != v.size() - i - 1 ? v[v.size() - i - 1] : 0) << ' ';
  }
  cout << endl;
  return 0;
}