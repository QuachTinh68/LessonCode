#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n; 
  cin >> n;
  for(int a = 1; a <= 200; a++) {
   for(int b = 1; b <= 200; b++){
      if(n * (a + b) == a * b) 
	  cout<<a<< " " <<b<<"\n";
   }
  }
  	return 0;
}

