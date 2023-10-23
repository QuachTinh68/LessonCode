#include<stdio.h>
#include<math.h> 
int tongcacchuso(int a);
int main() {
	int n; scanf("%d", &n);
	printf("%d ", tongcacchuso(n));
	int i, dem=0;
	for(i=1; i<=tongcacchuso(n); i++) {
		if(tongcacchuso(n) % i == 0) {
			dem++;
		}
	}
	if(dem==2) printf("YES");
	else 
		printf("NO");	
	return 0;	
}
int tongcacchuso(int a) {
	int dv;
	int sum=0;
	if(a < 0) {
		a *=-1;
	}
	while(a > 0) {
		dv = a % 10;
		sum +=dv;
		a = a / 10; 
	}
	return sum;
}

