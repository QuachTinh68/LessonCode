#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    float  a[n];
    for (int i=0; i<n; i++)
    cin >> a[i];
    int max=a[1];
    int dem=0, demmin=0;
    for (int i=1; i<n; i++)
    if (a[i]>max){
        max=a[i];
    }
    for (int i=0; i<n; i++)
    if (a[i]==max ){
      if (max%2==0) cout << max; 
    }
	return 0;
}

