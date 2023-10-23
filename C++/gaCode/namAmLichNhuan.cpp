#include <iostream>
using namespace std;

bool check(int n, int a[]) {
	bool isLeapYear = false;
	for (int i = 0; i < n; i++) {
		if (a[i] % 4 == 0) {
			 if (a[i] % 400 == 0 && a[i] % 100 != 0) {
				isLeapYear = true;
			}
		}
	}
	return isLeapYear;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool leapYear = check(n, a);
	for (int i = 0; i < n; i++) {
		if (leapYear) {
			cout << "leap year" << endl;
		} else {
			cout << "none" << endl;
		}
	}
	return 0;
}
