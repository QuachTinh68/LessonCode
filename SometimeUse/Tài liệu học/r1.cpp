#include <bits/stdc++.h>
using namespace std;
void move(int n, int A, int B, Int C){
	if (n>0){
		move(n-1,A,C,B);
		printf("\n Move disk % from %c to % c ", n, A, C);
		move(n-1,B,A,c);
	}
}
int main(){
	int n; cin >> n;
	cout << move(n);
}