#include <iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    if (b == 0) 
       throw runtime_error("divisor can't be 0\n");

    cout << a / b << endl;
    
    return 0;
}