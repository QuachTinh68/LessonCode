#include <bits/stdc++.h>
using namespace std;	
int main()
{
	 int a, b;
	 cin >> a >> b;
	 int S=0; 
	 if (a<=b){
	 	for (int i=1;i<=b;i++){
	 		S=a+(a*i); }
		 if (S>0) {
		 cout << "Positive";}
		 else  
		 if (S<0) {
		 cout << "Negative";}
		 else  
		 if (S=0) {
		 cout << "Zero"; }
	 } 
}  
