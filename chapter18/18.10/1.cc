#include "Sales_data.h"

int main() {
    Sales_data sd1("0x111", 8, 8.8);
    Sales_data sd2("0x222", 7, 1.9);
    // 没有捕获异常
    sd1 += sd2;
}