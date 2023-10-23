#include <bits/stdc++.h>
using namespace std;
int main()
{
	float n; cin >> n;
	double  tien; 
	if (n>=0 && n<=50)  {
	tien=n*1000;}
	else  
	if (n>50 && n<=100){tien=n*2000;}
	else 
	if (n>100 && n<=200) {
	tien=n*3000; }
	else 
	if (n>200 ) {
	tien=n*4000;}
	cout << fixed << setprecision(2) << tien; 
}
