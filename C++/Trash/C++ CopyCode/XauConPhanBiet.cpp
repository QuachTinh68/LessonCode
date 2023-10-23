#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s; s = "a" + s;
  set<string> st;
  for (int i = 1; i <= n; i++) {
    bool check = true;
    for (int j = 1; j <= n - i + 1; j++) {
      string a = s.substr(j, i);
      if (st.find(a) != st.end()) check = false;
      st.insert(a);
    }
    if(check) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
