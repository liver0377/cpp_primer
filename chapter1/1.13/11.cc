#include <iostream>

int main() {
	int start, end;
	std::cin >> start >> end;
	for (int i = start; i <= end; i++) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}
