#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
	cin>>n;
	long long mod=1000000007;
	cout<<(( ((n%mod * (n+1)%mod)) * (((n+2)%mod * (n+3)%mod)) ))/4%mod;   