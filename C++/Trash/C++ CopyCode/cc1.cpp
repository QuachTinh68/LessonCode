#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c;
	cin >> a >> b >> c;
	if ((a==b) && (a==c) && (b==c)){ cout << "Tam giac deu";}
	if ((a==b) && (a==c) && (b!=c) || (a==b) && (c==b) && (b!=a) || (b==c) && (b==a) && (b==c) && (a!=c)) {cout << "Tam giac can";}
		else { 
			cout << "Tam giac thuong";
		}
}