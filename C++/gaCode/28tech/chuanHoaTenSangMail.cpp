#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n; cin.ignore();
	while (n--){
		string s;
		getline(cin,s);
		int cnt=0;
		for (int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		vector <string> v;
		stringstream ss(s);
		string tmp;
		string res="";
//		srand(time(0));
		while (ss >> tmp) v.push_back(tmp);
		res+= v[v.size()-1];
		for (int i=0; i<v.size()-1;i++){
			res+=v[i][0];
		}
		++cnt;
		cout << res<<cnt<< "@gmail.com" << endl;
	}
}