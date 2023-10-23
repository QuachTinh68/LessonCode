#include<bits/stdc++.h>
using namespace std;


int main(){
	long long h,a,b,dem=0;
	cin>>h>>a>>b;
	if (a<=b&&h>a){cout<<"-1";
	}
else {

	while(true){
	dem=dem+1;
	h=h-a;
	if (h<=0){break;}
	h=h+b;
		}
cout<<dem;
	}
}

