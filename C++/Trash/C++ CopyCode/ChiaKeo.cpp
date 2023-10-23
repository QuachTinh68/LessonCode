#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int ans = 1e9;
  for (int &i : a) cin >> i;
  for (int i = 0 ; i < (1 << n) ; i++) {
    int s1 = 0 , s2 = 0;
    for (int j = 0 ; j < n ; j++) {
      if (i & (1 << j)) {
        s1 += a[j];
      }
      else {
        s2 += a[j];
      }
    }
    ans = min(ans , abs(s1 - s2));
  }  
  cout << ans;
}

int main() {
  cin.tie(nullptr) -> sync_with_stdio(false);
  int TC = 1;
  //cin >> TC;
  while(TC--) {
    solve();
  }
}
