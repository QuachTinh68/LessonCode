#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p;
	cin >>n >>p;
	int S;
	if (n%(p*4)==0){
		cout << n/(p*4);
	}else {
		cout << n/(p*4)+1;
	}
	return 0;
}