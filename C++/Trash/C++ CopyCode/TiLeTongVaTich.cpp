#include <stdio.h>
int main()
{
	long long n,s=1;
	double t=0;
	scanf("%lld",&n);
	while(n!=0)
	{
		s=s*(n%10);
		t=t+(n%10);
		n=n/10;
	}
	printf("%.3lf",s/t);
	return 0;
}
