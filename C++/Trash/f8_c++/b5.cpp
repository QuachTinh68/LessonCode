#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cout << "n = "; cin >> n;
	int S=0;
	for (int i=0;i<=n;i++){
			S=S+pow(i,2);
	}
	cout << "S = " << S;
}