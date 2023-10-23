#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;string s;
	cin >> n;
	int tong = 0;
	while (n--){
		getline(cin.ignore(),s);
		stringstream ss(s);
		string a;
		while (ss>>a){
			tong++;
		}
//		cin.ignore();
	}
	cout << tong;
}
