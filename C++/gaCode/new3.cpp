#include <bits/stdc++.h>
using namespace std;
int main(){
	float x1,y1,x2,y2;
	cin >>x1>>y1>>x2>>y2;
	double d=0;
	 d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout << fixed << setprecision(9)<< d;
}