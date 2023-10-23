#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int x, t; cin >> x;
 	if (x<=1) {
 		t=15000;
	 }if ( x>1 && x<=5){
	 	t=15000+(x-1)*13500;
	 } if (x>5&&x<=120){
	 	t=15000+ 4*13500 +(x-5)*11000;
	 }	if (x>=120) {
	 	t=(15000+4*13500+(x-5)*11000)*0,9;
	 }
	 cout << t;
	 return 0;
}
	 