#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s)	;
	stringstream ss(s);
	string tmp;
	string a;
	while (ss >> tmp){
		a+=tmp;
	}
	cout << a;
}