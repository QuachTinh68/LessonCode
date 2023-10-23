#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	int demmax=0, demmin=0;
    cin >> n;
    int a[100000001];
    for (int i=0;i<n;i++){
	    cin>>a[i];
	   	int min=a[0],max=a[0]; }
    for (int i=0;i<n;i++){
    	if (a[i]<min) min=a[i];
    	if (max<a[i]) max=a[i];}
	if(max==min){
		cout << n;}
		for (int i=0;i<n;i++){
			if (max==a[i]) demmax=demmax+1;
			if (min==a[i]) demmin=demmax+1;
		} 
    cout<<demmax+demmin;
    return 0;
}
