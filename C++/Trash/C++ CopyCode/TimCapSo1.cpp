#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int n,a;
	double b; 
	cin>>n;	
	for(a=1;a<=200;a++) 
	
		{for (b=1;b<=200;b++)
			{if( n*(a+b)==a*b)
			 cout<<a<<" "<<b<<endl ;
			}
		}
		
}


