#include<bits/stdc++.h>
using namespace std;

bool cmp(int l, int r)
{
	return r<l;
}
int main(){
	int n;
	cin >> n;
	int h[n], a[n];
	for (int i=0; i<n; i++){
		cin >> h[i];
		a[i]=h[i];
	}
	int count=1;
	sort(h,h+n,cmp);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if(a[i]==h[j]) {
				cout << j+1 <<endl;
				break;
			}
		}
		}
	return 0;
}
