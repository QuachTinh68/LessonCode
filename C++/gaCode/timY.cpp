#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin >> x;
	if(x<10)
		y=(x*x)-(2*x)+4;
	if(x>=10)
		y=(x*x*x)+5*x;
		
	cout << y;
	return 0;	
}