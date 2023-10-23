#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	long long b[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int gt = 1;
	int r = 0;
	for(int i = 1; i <= n; i++){
		b[i]= a[i]*i-r;
		r+=b[i];
		cout<<b[i]<<" ";
	}
}
