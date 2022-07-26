#include <tuple>

using namespace std;

int main() {
    auto item = std::make_tuple("0-999-138913-X", 3, 20.00);
    auto book = std::get<0>(item);

    using trans = decltype(item);
    size_t sz = tuple_size<trans>::value;
    tuple_element<1, trans>::type cnt = get<1>(item);
    
}