#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100000],i,dem=1,max;
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>a[i];
    max=a[1];
    for (i=2;i<=n;i++) {
        if (a[i]>max) {  
            max=a[i];
            dem=0;
        }
        if (a[i]==max)
            dem++;
    }
    cout<<max<<" "<<dem;
    return 0;
}

