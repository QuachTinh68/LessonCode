#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a, b, c;
	 cin >> a >> b >> c;
	float x1, x2, D;
	D = (b*b)-(4*a*c);
  if ( a!= 0){ 	
    if (D > 0){   
	  	x1 = (-b+sqrt(D))/(2*a);
	   	x2 =(-b-sqrt(D))/(2*a);
  	    cout << setprecision(4)<<fixed<<x1<<endl;
        cout << setprecision(4)<<fixed<<x2;}
   else if (D == 0){
  	   x1=-b/(2*a);
       cout << setprecision(4)<<fixed<<x1<<endl;}
       else {
       	cout << "No solution";}
   }
  else { 
  	cout << "No solution";}
  return 0;	
}


