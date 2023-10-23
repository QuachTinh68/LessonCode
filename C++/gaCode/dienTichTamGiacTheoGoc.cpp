#include<bits/stdc++.h>
using namespace std;
int main(){
	
	float a, b, alpha;
	const float Pi=3.14159;
	cin >> a >> b >> alpha;
	
	float radian;
	radian=alpha*(Pi/180);
	
	float acreage;
	acreage=(a*b*sin(radian))/2;
	cout << fixed << setprecision(4)<< acreage;
}