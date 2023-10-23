#include<bits/stdc++.h>
using namespace std;
int check(int x){
	if( (x%400==0) || (x%4==0 && x%100!=0)){
		return 1;
	}
	return 0;
}
int main(){
	int n;cin >> n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		if(check(x)==1){
			cout <<"leap year\n"	;
		}
		else cout <<"none\n";
	}
}
