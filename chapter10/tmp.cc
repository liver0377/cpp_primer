#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    const char *s1 = "hello";
    const char *s2 = "helloo";
    equal(begin(s1), end(s1), begin(s2));    
}