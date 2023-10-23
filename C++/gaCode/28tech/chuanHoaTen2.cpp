#include <bits/stdc++.h>
using namespace std;

//void vietHoa(string &s){
//	for(int i=0;i<s.size();i++){
//		s[i]=toupper(s[i]);
//	}
//}
void chuanHoa(string &s){
	s[0]=toupper(s[0]);
	for (int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
main(){
	int n; cin >> n; cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		string res;
		vector <string> v;
		while (ss >> tmp) v.push_back(tmp);
		res+=v[v.size()-1];
		chuanHoa(res);
		cout <<res<< ", ";
		for (int i=0;i<v.size()-1;i++){
			chuanHoa(v[i]);
			cout <<v[i];
			if ( i != v.size()-2 ) cout <<" ";
		}
		cout << endl;
	}
}