#include<bits/stdc++.h>
using namespace std;
bool chuso (long long n)
{
    long long s=0;
    long long t=0;
    while(n>0)
    {
        s=s+n%10;
        n=n/10;
        ++t;
    }
    if(t==3)return true;
    else return false;
}
long long a[123456];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cin>>a[i];
    }
    long long t=0;
    for(int i=1; i<=n; ++i)
    {

        if(a[i]%2==0 || (chuso(a[i])==true && (a[i]%5==0 || a[i]%3==0)))++t;
    }
    cout<<t;
}