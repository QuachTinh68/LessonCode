#include <stdio.h>
int main()
{
	unsigned long long n,s=0;
	scanf("%lld",&n);
	for(long long i=1;i<=n%2021;i++)
	{
		s=(s+i*i)%2021;
	}
	printf("%lld",s);
}
