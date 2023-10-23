#include <stdio.h>
#include <math.h>
int main(){
	long long n, sum=1;
	scanf("%lld",&n);
	float x = sqrt(n);
	if ((int)x == x) sum+=x;
	for (int i=2; i<x; i++)
	{
		if (n%i==0) sum+= i + n/i;
	}
	if (sum > n) printf("YES");
	else printf("NO");
	return 0;
}