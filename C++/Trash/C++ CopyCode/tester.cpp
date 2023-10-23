#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n];
	for (int i=1;i<n;i++){
		cin >> a[i];
	}
	for (int i=0;i<n;i++){
	if ((a[i]%4==0) && (a[i]%100==0) || (a[i]%400==0))
		cout << "leap year";break;
	else cout << "none";}
	return 0;	
}