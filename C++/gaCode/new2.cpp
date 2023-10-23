#include <bits/stdc++.h>
using namespace std;

int main(){
	long a,b,c,d,s[10];
	cin >> a>> b >> c>> d;
	s[0]=(a*b)%100;
	s[1]=(c*d)%100;
	s[2]=(s[1]*s[0])%100;
	cout << s[2]/10%10<<s[2]%10;
}