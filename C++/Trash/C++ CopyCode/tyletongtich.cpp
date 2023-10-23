#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,c=0,d=0;
    long long S=0,K=1;
    cin >> n;
    long long tnd=n;
   
    while (n!=0) {
        c=n%10;
        S=S+c;
        n=n/10;
    }
    
     while (tnd!=0) {
        d=tnd%10;
        K=K*d;
        tnd=tnd/10;
    }
    
    cout << fixed << setprecision(3) << double(K)/S;
    return 0;
}
