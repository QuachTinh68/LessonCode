#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,sum[n];
	long long result=0;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum[0]=a[0];
	for (i=1;i<n;i++)
	{
		sum[i]=sum[i-1]+a[i];
		result+=a[i]*(long long)sum[i-1];
	}
	printf("%lld",result);
	return 0;
}

