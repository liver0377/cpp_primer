#include <iostream>

int main() {
	int start = 50;
	int sum = 0;
	while (start <= 100) {
		sum += start;
		start++;
	}
	std::cout << "The Sum of 50 to 100 is " << sum << std::endl;
	return 0;
}
