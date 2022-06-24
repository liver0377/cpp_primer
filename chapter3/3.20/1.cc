#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  int t;
  while (cin >> t) {
    v.push_back(t);
  }
  for (int i = 0; i < v.size(); i += 2) {
    cout << v[i] + (i + 1 < v.size() ? v[i + 1] : 0) << " ";
  }
  cout << endl;
  return 0;
}
