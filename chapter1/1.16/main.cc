#include <iostream>

int main() {
	int t;
	int sum = 0;
	while (std::cin >> t) {
		sum += t;
	}
	std::cout << "The Sum is " << sum << std::endl;
	return 0;
}
