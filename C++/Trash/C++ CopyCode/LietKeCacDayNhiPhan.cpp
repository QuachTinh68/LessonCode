#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int n;
int a[20];
void output(){
    for (int i = 1 ;i<=n;i++){
        cout << a[i];
    }
    cout << "\n";
}
void backtrack(int location){
    for (int i = 0 ; i<=1;i++){
        a[location] = i;
        if (location == n) output();
        else backtrack(location + 1);
    }
}
int main()
{
	cin >> n;
	backtrack(1);
	return 0;
}

