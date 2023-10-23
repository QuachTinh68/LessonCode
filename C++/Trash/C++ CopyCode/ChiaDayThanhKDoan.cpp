#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
  int n , k; cin >> n >> k;

  vector<i64> a(n);
  for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
  auto check = [&](i64 x) {
    i64 g = 0 , sum = 0;
    for (int i = 0 ; i < n ; i++) {
      if (a[i] > x) return false;
      if (sum + a[i] > x) {
        ++g;
        sum = 0;
      }
      sum += a[i];
    }   
    if (sum) ++g;
    return g <= k; 
  };
	i64 l = 0;
  i64 r = 1;
	while (!check(r))  r <<= 1;
	
  while(r - l > 1){
		i64 m  = (l + r) >> 1;
    if (!check(m)) l = m;
    else r = m;    
	}
  cout << r;
}

