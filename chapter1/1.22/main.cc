#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item item, sum;
	while (std::cin >> item) {
		sum = sum + item;
	}
	std::cout << sum << std::endl;
	return 0;
}
