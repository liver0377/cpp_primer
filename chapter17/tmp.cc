#include <bitset>
#include <iostream>
#include <tuple>

using namespace std;

int main() {
    auto item = make_tuple("hello", 1, 8, 8);
    using trans = decltype(item);
    // tuple_element<0, decltype<item>>::type s;
    tuple_element<0, trans>::type s("world");
    auto num = get<1>(item);
    std::cout << num << std::endl;

    std::bitset<100> bt(
        "111111111111111111111111111111111111111111111111111111");
    std::cout << bt.all() << std::endl;
    bt.any();
    bt.count();
    bt.flip();
    bt.none();
    ~bt[99];
    bt[99].flip();
    bt.test(99);
    bt.set(98, 1);
    // auto ull = bt.to_ullong();
}