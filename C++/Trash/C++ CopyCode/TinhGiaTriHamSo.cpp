#include<bits/stdc++.h> 
using namespace std; 
int main(){
	double x,fx;
 	cin >> x;
 	if (x>0){
 		fx=(x*x)+sqrt(x)+1;
	 }
 	if (x<=0){
 		fx=((x*x*x)+2*x+1)/(x+3);
	 }
	if(x==-3) cout << " Div by zero";
	else	
	cout << fixed << setprecision(6) << fx;
	return 0;
}

