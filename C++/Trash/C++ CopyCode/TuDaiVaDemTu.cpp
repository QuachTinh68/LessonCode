#include<bits/stdc++.h>
using namespace std;

bool isAlb(char x){
	if(('a' <= x && x <= 'z') || ('A' <= x && x<= 'Z')) return true;
	return false;
}

int main(){
	int count=0, len=0, ans=0;
	string s;
	getline(cin, s);
	s= s + "!";
	for (int i=0; i<s.size()-1; i++){
		if (isAlb(s[i])){
			len++;
			if(!isAlb(s[i+1]) ){	
				ans = max(ans, len);
				len = 0;
				count++;
			}
		}
	}
	cout << ans << "\n" << count;
	return 0;
}
