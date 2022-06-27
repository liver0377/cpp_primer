#include <iostream>

using namespace std;

int f() {
    static int si = -1;
    return ++si;
}

int main()  {

}