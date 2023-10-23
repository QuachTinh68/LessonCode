#inlcude <bits/stdc++.h>
using namespacestd;
void move(int n, int A, int B, int C){
	if (n>0){
		move(n-1,A,B,C);
		printf("\n Move disk %d from %c to %c", A,C);
		move(n-1,B,A,C);
	}
}
int main(){
	int n; cin >> n;
	move();
	return 0;
}