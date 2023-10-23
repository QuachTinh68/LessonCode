#include <bits/stdc++.h>
using namespace std;
int main(){
	int n ; cin >> n;
	int hour, minute, second;
	hour=n/3600;
	minute=(n-(hour*3600))/60;
	second=n-(hour*3600 + minute*60);
	if(hour/10==0) cout<<"0"<<hour<<":";
	else cout<<hour<<":";
	if(minute/10==0) cout<<"0"<<minute<<":";
	else cout<<minute<<":";
	if(second/10==0) cout<<"0"<<second;
	else cout<<second;

}