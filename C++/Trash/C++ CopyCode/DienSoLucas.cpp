#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	cin>>n;
	ll a[100];
	a[0]=2;
	a[1]=1;
	for (int i=2;i<=n;i++){
		a[i]=a[i-1] +a[i-2];
	}
	for (int i=0;i<=n;i++)
		cout <<a[i]<<" ";
	return 0;
}


