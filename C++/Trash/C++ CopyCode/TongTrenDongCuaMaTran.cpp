#include<iostream>
using namespace std;
int main(){
	long m,n,j,k;
	cin>>m>>n;
	long a[m][n];
	long S[m];
	for(j=0;j<m;j++)
		for(k=0;k<n;k++)
			cin>>a[j][k];
	for(j=0;j<m;j++){
		S[j]=0;
		for(k=0;k<n;k++)
			S[j]=S[j]+a[j][k];}
	for(j=0;j<m;j++)
		cout<<S[j]<<endl;
}

