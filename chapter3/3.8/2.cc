#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		s[i] = 'X';
	}
	cout << s << endl;
	return 0;
}
