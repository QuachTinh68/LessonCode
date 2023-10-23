#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2,d;
	cin >> a >> b >> c;
	if (a!=0){
		d=b*b-4*a*c;
		if(d>0){
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
		}else cout << "Vo nghiem";
	}
	else if (b!=0){
		x1=-c/b;}
 	else if (c!=0){ cout << "Vo Nghiem";}
	else cout << "Vo so nghiem";
	cout << x1 << " " << x2;		
}
