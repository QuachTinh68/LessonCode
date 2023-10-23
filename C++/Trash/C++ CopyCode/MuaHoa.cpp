#include <bits/stdc++.h>


using namespace std;
int main() {
	int a,b,c,tien=0;
	int x,y;
	cin>>a>>b>>c;
	for (int x=0;x<=c/a;x++){
		y=(c-a*x)/b;
		tien=max(tien,x*a+b*y);
	}
cout<<tien;}
