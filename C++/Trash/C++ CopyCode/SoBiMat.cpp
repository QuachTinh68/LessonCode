#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll n; cin >> n;
    ll a[n+2];
    for (ll i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for (ll i = 0;i < n;i++){
        if (a[i-1] != a[i] & a[i+1] != a[i]){
            cout << a[i];
            break;
        }
    }
    return 0;
}

