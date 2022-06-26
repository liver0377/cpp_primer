#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int i;
  double d;
  const string *ps;
  char *pc;
  void *pv;

  pv = static_cast<void *>(const_cast<string *>(ps));
  i = static_cast<int>(*pc);
  pv = static_cast<void*>(&d);
  pc = reinterpret_cast<char*>(pv);  
  return 0;
}