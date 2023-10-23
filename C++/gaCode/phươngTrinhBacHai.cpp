#include <bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,x1,x2;
	float del;
	cin >>a >> b >> c;
	del=b*b-4*a*c;
	if (a!=0){
		if(del<0){
			cout <<"No solution";
		}else
		if(del==0){
			x1=-b/(2*a);
			x2=-b/(2*a);
			cout << fixed << setprecision(4)<< x1<<"\n" << x2;
		}else
		if(del>0){
			x1=(-b+sqrt(del))/(2*a);
			x2=(-b-sqrt(del))/(2*a);
			cout << fixed << setprecision(4)<< x1<<"\n" << x2;
		}
	}

	return 0;	
}