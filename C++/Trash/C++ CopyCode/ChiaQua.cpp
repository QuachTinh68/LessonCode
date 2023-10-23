#include <bits/stdc++.h>
using namespace std;

bool check(int n){
	int k = (int)sqrt(n);
	return k * k == n;
}

int main(){
	int x,y; cin >> x >> y;
	int gcd = __gcd(x,y);
	int cnt = 0;
	for (int i = 1; i * i <= gcd; ++i){
		if (gcd % i == 0) {
			cnt += 2;
		}
	}
	cout << cnt - (check(gcd));
}

