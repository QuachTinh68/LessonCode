#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    k--;
    int u, v, l, r;
    cin >> u >> v >> l >> r;
    u--;
    v--;
    l--;
    r--;
    vector <int> a(n);
    for (int i = 0; i < n; ++i)
        a[i] = i + 1;
    vector <int> aa = a;
    int cnt = 0;
    vector <vector <int>> b(10000);
    while (true)
    {
        reverse(a.begin() + u, a.begin() + v + 1);
        reverse(a.begin() + l, a.begin() + r + 1);
        b[cnt++] = a;
        if (a == aa)
            break;
    }
    for (auto i : b[k % cnt])
        cout << i << "\n";
}

