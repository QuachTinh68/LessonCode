#include <bits/stdc++.h>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;	
	int a = max(m, n);	
	if (m == n) {
		cout << a * 2;
		return 0;
	}
	cout << a * 2 - 1;
}

