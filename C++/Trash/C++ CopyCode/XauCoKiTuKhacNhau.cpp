include<bits/stdc++.h>
using namespace std;

int main()
{
	string n;cin>>n;
	int s[n.size()];
	set<char> se;
	for(int i = 0; i < n.size(); ++i){
		se.insert(n[i]);
	}
	if(se.size()==n.size()) cout<<"yes";
	else cout<<"no";
}

