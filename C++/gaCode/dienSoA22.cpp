#include<bits/stdc++.h>
using namespace std;
long long a[1234567];
int main()
{
    long long k;
    cin>>k;
    for(int i=0; i<=100001; ++i)
    {
        a[k]=k*k+1;
    }
    cout<<a[k];
}
