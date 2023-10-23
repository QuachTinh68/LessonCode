#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin >> m >>n;
	if(n%m==0 || m%n==0){
		cout << "Yes";
	}else{
		cout <<"No";
	}
}