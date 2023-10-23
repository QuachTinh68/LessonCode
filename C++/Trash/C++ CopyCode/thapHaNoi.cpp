#include <bits/stdc++.h>
using namespace std;
float S(int n){
	if (n==1) return 0.5;
	else return S(n-1)+1.0/(n*n+1);
}
int main(){
	float n; cin >> n;
	cout << S(n);
}