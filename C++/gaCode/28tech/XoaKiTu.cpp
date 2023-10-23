#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string del;
	cin>>del;
	string tmp;
	stringstream ss(s);
	vector<string> v;
	while (ss >> tmp){
		if (tmp != del){
			v.push_back(tmp);
		}
	}
	for (int i=0; i<v.size(); i++){
		cout << v[i];
		if (i != (v.size() - 1)) {
			cout << " ";
		}
	}
}