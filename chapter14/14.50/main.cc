#include <iostream>

using namespace std;

struct LongDouble {
    LongDouble(double = 0.0){};
    operator double() { return double(0.0); };
    operator float() { return float(0.0); };
};

LongDouble ldObj;
float ex2 = ldObj;

void calc(int) { cout << "1" << endl; }
void calc(LongDouble) { cout << "2" << endl; }

double dval;

int main() { calc(dval); }