#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[ n];
	int dem =0;
	int c=0;
	int k=0;
	int z=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
	
		if(a[i]<0){
		
		dem++;}
		if(a[i]>0)
	{
		c++;
	}
		if(a[i]%2==0)
	{
		k++;
		}
		else
	
		z++;
			
		}
	cout<<dem<<" "<<c<<" "<<k<<" "<<z;
	

	return 0;}

