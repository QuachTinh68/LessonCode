#include <bits/stdc++.h>
using namespace std;

void chuanHoa(string &s){
	s[0]=toupper(s[0]);
	for (int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	int n;  cin>> n; cin.ignore();
	while (n--){
		string s;
		getline(cin,s);
		for (int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		vector <string> v;
		stringstream ss(s);
		string word;
		string res;
		while (ss >> word) v.push_back(word);
		res+=v[v.size()-1];
		for (int i=0;i<res.size();i++){
			res[i]=toupper(res[i]);
		}
		for (int i=0 ;i<v.size()-1;i++){
			chuanHoa(v[i]);
			cout << v[i];
			if (i == v.size()-2) cout <<", ";
			else cout <<" ";
		}
		cout<<res<<endl;
	}
}