#include <bits/stdc++.h>
using namespace std; 
int main()
{
	float T=0,x;cin >> x;
	int n;cin >> n;  
	for(int i=1;i<n;i++){
		T=T+((n-(i-1))*(n-i)*pow(x,i))/i;}
	cout << fixed << setprecision(2) <<T; 
	return 0;
}
