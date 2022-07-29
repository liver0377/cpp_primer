#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> v = {"hello", "", "", "", "world"}; 
    function<bool(string&)> f = &string::empty;
    std::cout << count_if(v.begin(), v.end(), f);
    
}