#include <iostream>
#include <vector>
using namespace std;

int main() {

	string s = "";
	cin >> s;

	int one = 0;
	int zero = 0;
	int prev= -1;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0' && prev!= 0) {
			prev = 0;
			zero++;
		}
		else if (s[i] == '1' && prev!= 1) {
			prev = 1;
			one++;
		}
	}

	if (one < zero) {
		cout << one;
	}
	else {
		cout << zero;
	}

}
