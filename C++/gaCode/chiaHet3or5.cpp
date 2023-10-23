#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;

	cin >> n ;
	int count=0, a[n];

	for (int i=1;i<=n;i++){
			cin >> a[i];
		}
	for(int i=1;i<n;i++){
		if(a[i]%3==0 || a[i]%5==0){
			count++;
		}
	}
	cout << count;
	
	return 0;
}