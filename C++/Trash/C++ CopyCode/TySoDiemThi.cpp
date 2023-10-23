#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,dem1=0,dem2=0;
	cin >>n;
	int a[n],b[n];
	for (int i=0;i<n;i++)
	{
		cin >>a[i];
	}
	for (int i=0;i<n;i++)
	{
		cin >>b[i];
    } 
    	for (int i=0;i<n;i++)
    {
    if (a[i]>b[i])
    dem1 ++;
    else if (b[i]>a[i] ) 
    dem2++;
	}
    cout <<dem1<<" "<<dem2; 
}
