#include <bits/stdc++.h>
using namespace std; 
int main()
{
	float n; cin >> n;
	double tien; 
	if(n>=0 && n<=50){tien=1000*n;}
	if(n>50 && n<=100){tien=2000*(n-50) + 50*1000;}
	if(n>100 && n<=200){tien=3000*(n-100) + 50*2000 + 50*1000;}
	if(n>200){tien=4000*(n-200) + 100*3000 + 50*2000 + 50*1000;}
	cout << fixed<<setprecision(2) << tien;
	return 0;
}
