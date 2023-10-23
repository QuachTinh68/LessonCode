#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n; cin >> n;
  set<int> X, Y;
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    X.insert(a);
    Y.insert(b);
  }
  ll ans;
  int x, y;
  x = *X.rbegin() - *X.begin();
  y = *Y.rbegin() - *Y.begin();
  int max = ::max(x, y);
  ans = max * max;
  cout << ans;
  return 0;
}
