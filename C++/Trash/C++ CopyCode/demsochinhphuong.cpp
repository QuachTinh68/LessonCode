#include <bits/stdc++.h>
using namespace std;
int scp(int n)
{  
    int k=sqrt(n);
	if (n==k*k) return true ;
	else if (k*k>0) return false ;

}
  int  main()
  {
  	int n,dem=0;cin>>n;
  	int a[n];
  	for (int i=0;i<n;i++)
	  {cin>>a[i];
	  	if(scp(a[i])==true)
	  	dem++;
	  }
	  cout <<dem;
  }
