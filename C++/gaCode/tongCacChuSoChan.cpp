#include <bits/stdc++.h>
using namespace std;
long long n, res,t,s;
int main(){
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n ;
        while(n!=0)
        {
            n=abs(n);
            s=n%10;
            if(s%2==0)
                res=res+s;
            n=n/10;
        }
        cout << res<<endl;
        res=0;
    }
    return 0;
}