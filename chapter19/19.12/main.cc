#include <iostream>
#include <string>

#include "Screen.h"

using namespace std;

int main() {
    const Screen::pos Screen::*p = Screen::get_cursor();
    Screen s(8, 10);
    auto cur = s.*p;
    std::cout << cur << std::endl;
}
