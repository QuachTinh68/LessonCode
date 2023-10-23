#include <bits/stdc++.h>
using namespace std;
string rutgon(int a,int b,int c,int d){
	int tu=a*d+b*c;
	int mau=b*d;
	int f=tu;
	int e=mau;
	tu=tu/__gcd(e,f);
	mau=mau/__gcd(e,f);
	if(mau<0 and tu>0){
		tu*=-1;
		mau*=-1;
	}
	if(mau==1) return to_string(tu);
	else return to_string(tu)+"/"+to_string(mau);
}
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<rutgon(a,b,c,d);
}

