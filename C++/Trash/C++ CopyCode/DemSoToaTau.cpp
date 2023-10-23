#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, a;
    cin>>n>>p;
    if(n%(4*p)==0){
        a=n/(4*p);
        cout<<a;
    }
    else{
        a=n/(4*p)+1;
        cout<<a;
    }
    return 0;
}
