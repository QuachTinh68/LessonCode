#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c,x1,x2,d;
	cin >> a >> b >> c;
	if (a==0){
		if(b==0){
			if (c==0){
				cout << "Vo so Nghiem";}
		}else {
		x1=-c/b; cout << x1;}}
	else d=b*b-4*a*c;
		if (d<0) cout <<" Vo Nghiem";
		else {
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
		}
	cout << x1 << " "<< x2;	
}
		
	