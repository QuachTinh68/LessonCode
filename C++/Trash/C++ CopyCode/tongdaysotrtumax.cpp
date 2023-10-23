#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long s=0;
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i] >max) 
        max=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=max)
        s=s+a[i] ;
    }
    cout<<s;
    return 0;
}