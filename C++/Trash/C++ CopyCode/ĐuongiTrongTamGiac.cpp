#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define MO ios::sync_with_stdio(false); cin.tie(0)
using namespace std;
int main(){
	MO;
	int n; cin>>n;
	int a[n+5][n+5];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<n;i++){
		for(int j=0; j<=i;j++){
			if(j!=0 && j!=i){
				a[i][j]=max(a[i-1][j], a[i-1][j-1]) + a[i][j]; 	
			}
			else if(j==0){
				a[i][j] =a[i][j] + a[i-1][j];
			}
			else if(j==i) {
				a[i][j]=a[i][j]+a[i-1][j-1];
			}
		}
	}
		int max=a[n-1][0];
		for(int i=1;i<n;i++){
			if(max<a[n-1][i]) max =a[n-1][i];
		}
	cout<<max;
	return 0;
}

