#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cout << "n = "; cin >> n;
	int S=1;
	for (int i=1;i<=n;i++){
			S=S*i;
	}
	cout << "n!= " << S;
}