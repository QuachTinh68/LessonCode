#include <bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,x1,x2;
	double del;
	cin >>a >> b >> c;
	if (a!=0){
		del=b*b-4*a*c;
		if(del>0){
			x1=(-b+sqrt(del))/(2*a);
			x2=(-b-sqrt(del))/(2*a);
			cout << fixed << setprecision(4)<< x1<<endl;
			cout << fixed << setprecision(4) << x2;
		}else
			if(del==0){
			cout << fixed << setprecision(4)<< -b/(2*a);
		}
		else{
			cout <<"No solution";
		}
	}
	return 0;	
}