#include <iostream>
using namespace std;
int main() {
	int a, y = 0, i;
	cout << "bir eded daxil edin: ";
	cin >> a;
	for (i = 1; a >= i; i=i+1) {
		if (a % i==0) {
			y = y + 1;
		}
	}
	if (y == 2) {
		cout << "eded sadedir";
	}
	else {
		cout << "eded sade deyil";
	}
	return 0;
}
