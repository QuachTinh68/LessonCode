#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cout << "n = "; cin >> n;
	int S=0;
	for (int i=1;i<=n;i++){
			if (i%2!=0){
				S+=i;
			}
	}
	cout << "Tong so le la: " << S;
}      