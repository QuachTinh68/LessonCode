#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	if( ( n%2==0) && (n<0 && n%3==0)){
		cout <<"No";
		return 0;
	}
	if( (  n%2==0) || (n<0 && n%3==0)){
		cout <<"Yes";
	}
	else {
		cout <<"No";
	}
	return 0;
}
