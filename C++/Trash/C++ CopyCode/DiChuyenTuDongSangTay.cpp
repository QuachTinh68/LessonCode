#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	ll F[m+2][n+2];
	for(int i=0;i<=m+1;i++){
		for(int j=0;j<=n+1;j++){
			if(i==0||j==0||i==m+1||j==n+1) F[i][j]=1e18;
			else cin>>F[i][j];
		}
	}
	ll v[n+2];
	int k=0;
	for(int j=2;j<=n;j++){
		for(int i=1;i<=m;i++){
			F[i][j]=F[i][j]+min(F[i][j-1],min(F[i-1][j-1],F[i+1][j-1]));
		}
	}
	ll rs=1e18;
	int idx;
	for(int i=1;i<=m;i++){
		if(rs>F[i][n]){
		   rs=F[i][n]; 
		   idx=i;
		} 
	}
	v[k++]=idx;
	for(int j=n;j>=2;j--){
	    long long MIN=min(F[idx][j-1],min(F[idx-1][j-1],F[idx+1][j-1]));
	    if(MIN==F[idx-1][j-1]) {
	        v[k++]=idx-1;
	        idx=idx-1;
	    }
	    else if(MIN==F[idx][j-1]){
	        v[k++]=idx;
	    }
	    else if(MIN==F[idx+1][j-1]){
	        v[k++]=idx+1;
	        idx=idx+1;
	    }
	    }
	
	cout<<rs<<endl;
	for(int i=k-1;i>=0;i--) cout<<v[i]<<" ";
	return 0;
}

