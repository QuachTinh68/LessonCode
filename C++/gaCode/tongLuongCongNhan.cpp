#include <bits/stdc++.h>
using namespace std;
int main(){
	int Tong=0, n;
	while(true){
		cin >> n;
		if (n==(-1)){
			break;
		}
		Tong+=n;
	}
	cout << Tong;
}