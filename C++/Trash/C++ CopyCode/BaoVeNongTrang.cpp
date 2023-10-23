#include <bits/stdc++.h>
using namespace std;
const int limit = 1e3;
int a[limit][limit],n,m;
int xx[8] = {-1,-1,-1,0,0,1,1,1};
int yy[8] = {-1,0,1,-1,1,-1,0,1};
bool b[limit][limit];
bool isHill;
bool check(int x, int y)
{
    if (x < 0 || y < 0 || x >= n || y >= m) return false;
    return true;
}
void dfs(int x, int y)
{
    b[x][y] = true;
    for (int i = 0; i <= 7; i++)
    {
        int u = x+xx[i];
        int v = y+yy[i];
        if (check(u,v) == false) continue;
        if (a[u][v] > a[x][y]) isHill = false;
        if (a[u][v] == a[x][y] && b[u][v]== false) dfs(u,v);
    }
}
int main()
{
    cin >> n >> m; 
    for (int i = 0; i < n; i++)
       for (int j = 0; j < m; j++)
         cin >> a[i][j];
    int res = 0;
    memset(b,false,sizeof(b));
    for (int i = 0; i < n; i++)
       for (int j = 0; j < m; j++)
       if (!b[i][j])
       {
           isHill = true; 
           dfs(i,j);
           if (isHill == true) res++;
       }
    cout << res;
}
a
