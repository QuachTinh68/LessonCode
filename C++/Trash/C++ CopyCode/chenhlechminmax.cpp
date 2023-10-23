#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, min,max, demmax=0, demmin=0;
    int kq; 
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
	    cin>>a[i];
	    min=a[0]; max=a[0];
    for (int i=0;i<n;i++){
    	if (min>a[i])  demmin++;} 
    for (int j=0;j<n;j++){
    	if (max<a[j])  demmax++;} 		
    	kq=demmax+demmin; 
    cout<<kq;
    return 0;
}
