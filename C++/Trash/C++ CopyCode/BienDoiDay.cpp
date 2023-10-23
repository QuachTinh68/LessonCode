#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


int main(){
  int n; cin >> n;
  ll a[n];
  // ll counter = 0;
  bool ok = true;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++){
    if(a[i] % 2 != 0) ok = false;
  }
  int k;
  int count = INT_MAX;
  if(ok) {
  for(int i = 0; i < n; i++) {
      int x = a[i];
      k = 0;
    while(x % 2 == 0){
        k++;
        x /= 2;
        if(x % 2 != 0) {
        count = min(count,k);
       }
    }
    
  }
  cout << count;
}
  else cout << 0; 
    return 0;
}

