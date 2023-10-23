#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,dem=0,c,d;
    cin>>n;
    long long k=n*n;
    long long g=k;
    while(k!=0){
    	dem++;
    	k/=10;
	}
	int a,b;
	if(dem%2==0){
		a=(int)dem/2;
		b=0;
	}else{
		a=(int)dem/2;
		b=dem-(int)dem/2;
	}
	int t1=1,t2=1;
	for(int i=0;i<a;i++){
		t1*=10;
	}
	for(int i=0;i<b;i++){
		t2*=10;
	}
	if(dem%2==0){
	   c=g/t1;
	   d=g%t1;	
	}else{
		c=g/t2;
		d=g%t2;
	}
	if(n==c+d) cout<<"YES";
	else cout<<"NO";
}