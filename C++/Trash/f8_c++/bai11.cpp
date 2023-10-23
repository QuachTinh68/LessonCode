#include<bits/stdc++.h>
using namespace std;
int check(int n){
	for(int i=2; i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n; cin >>n;
	if (check(n)==true)
	cout << n << " la so nguyen to ";
	else 
	cout << n << " khong phai la so nguyen to";
}