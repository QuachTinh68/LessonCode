#include <bits/stdc++.h>
using namespace std;
string tong(string a,string b)
{
	string s1="";
	int nho=0;
	while(a.size()<b.size()) a="0"+a;
	while(a.size()>b.size()) b="0"+b;
	for(int i=a.size()-1;i>=0;i--)
	{
		int cong =int(a[i]-'0')+int(b[i]-'0')+nho;
		s1=char(cong%10+'0')+s1;
		nho=cong/10;
	}
	if(nho>0) s1=char(nho+'0')+s1;
	return s1;
}
int main()
{
	string a;
	getline(cin,a);
	string b;
	getline(cin,b);
	cout<<tong(a,b);
	return 0;
}

