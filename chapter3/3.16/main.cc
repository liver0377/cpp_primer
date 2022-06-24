#include <iostream>
#include <vector>

using namespace std;

template <typename T> void f(vector<T> &v, int i) {
  cout << "v" << i << " size: " << v.size() << " content: ";
  for (auto &r : v) {
    cout << r << " ";
  }
  cout << endl;
}

int main() {
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<int> v6{10};
  vector<string> v7{10, "hi"};

  f(v1, 1);
  f(v2, 2);
  f(v3, 3);
  f(v4, 4);
  f(v5, 5);
  f(v6, 6);
  f(v7, 7);

  return 0;
}