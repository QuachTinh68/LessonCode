#include<bits/stdc++.h>
using namespace std;
string s;
void chuanhoa(string &s){
		s[0] = toupper(s[0]);
		for(int i = 1; i < s.size(); i++){
			s[i] = tolower(s[i]);
	}
}
int main(){
		while(getline(cin,s)){
		stringstream ss(s);
		string temp;
		vector<string> v;
		while(ss >> temp) v.push_back(temp);
		for(int i = 0; i < v.size(); i++){
			chuanhoa(v[i]);
			cout<<v[i]<<" ";
		}
		cout<<endl;
		}
	return 0;			
}

