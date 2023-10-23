#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n; cin >> n;
	int dem=0;
	if (n==0){
		cout << 1;
	}
	int c;
	while(n>0){
		c=n%10;
		if (c%2==0){
			dem++;
		}
		n=n/10;
	}
	cout << dem;
	return 0;
}