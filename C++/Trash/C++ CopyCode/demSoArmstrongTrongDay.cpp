include <stdio.h>
#include <math.h>
int Armstrong(int a)
{
	int dem=0;
	long long sum=0;
	int m=a;
	int n=a;
	while (a!=0)
	{
		a=a/10;
		dem++;
	}
	while (m!=0)
	{
		int dv=m%10;
		sum=sum+pow(dv,dem);
		m=m/10;
	}
	if (sum==n) return 1;
	else return 0;
	
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int count=0;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		if (Armstrong(a[i])==1) count++;
		
	}
	printf("%d",count);
	
}
