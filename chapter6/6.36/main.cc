#include <iostream>
#include <vector>
#include <string>

using namespace std;
using A_R_S_10 = string(&)[10];

string arr_s[10] = {};

string (&func())[10]; 
A_R_S_10 func();
auto func() -> string(&)[10];
decltype(arr_s)& func();


int main() {

}