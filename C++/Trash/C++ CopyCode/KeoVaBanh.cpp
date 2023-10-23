#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n;
void giai(){
    ll tmp=2*n;
    ll sqtmp=sqrt(tmp);
    if(sqtmp*(sqtmp+1)==tmp) cout<<sqtmp<<endl;
    else cout<<"No"<<endl;
}
void nhap(){
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        giai();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    //giai();
    return 0;
}


