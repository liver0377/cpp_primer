#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + s2;
    char *s = new char[s3.size()]; 
    strcpy(s, s3.c_str());
    cout << s << endl;
}