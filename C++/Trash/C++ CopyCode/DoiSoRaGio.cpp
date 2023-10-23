#include<bits/stdc++.h>
using namespace std;

int main(){
	int g,p,s,n;
	cin>>n;
	s=n%60;
	int tmp=n/60;
	p=tmp%60;
	g=tmp/60;
	if(g/10==0) cout<<"0"<<g<<":";
	else cout<<g<<":";
	if(p/10==0) cout<<"0"<<p<<":";
	else cout<<p<<":";
	if(s/10==0) cout<<"0"<<s;
	else cout<<s;

}
