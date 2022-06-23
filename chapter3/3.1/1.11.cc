#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int start, end;
	cin >> start >> end;
	while (start <= end) {
		cout << start << ' ';
		start ++;
	}
	cout << endl;
	return 0;
}
