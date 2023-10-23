#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int par[N + 1];
int E[N + 1];
int root(int x) {
    return par[x] < 0 ? x : par[x] = root(par[x]);
}

void merge(int x, int y) {
    if ((x = root(x)) == (y = root(y)))
        return;
    if (par[x] > par[y])
        swap(x, y);
    par[x] += par[y];
    par[y] = x;
}

int solve() {
    memset(par, -1, sizeof(par));
    memset(E, -1, sizeof(E));
    int n, m;
    cin >> n >> m;
    while (m--) {
        char c;
        int a, b;
        cin >> c >> a >> b;
        if (c == 'F') {
            merge(a, b);
        } else {
            if (E[a] > 0)
                merge(E[a], b);
            else
                E[a] = b;
            if (E[b] > 0)
                merge(E[b], a);
            else
                E[b] = a;
        }
    }

    unordered_set<int> s;
    for (int i = 1; i <= n; i++)
        s.insert(root(i));

    cout << s.size();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

