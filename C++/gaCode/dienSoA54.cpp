#include<bits/stdc++.h>
using namespace std;
long long a[1234567];
int main()
{
    long long k;
    cin>>k;
    for(int i=1; i<=100001; ++i)
    {
        //a[k]=9*1*(k-1)+a[k-1];
        a[i]=9*1*(i-1)+a[i-1];
    }
    cout<<a[k]+1;
}