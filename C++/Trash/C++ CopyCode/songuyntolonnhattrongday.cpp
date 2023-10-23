#include<math.h>
#include<stdio.h>
int main()
{
	int a,max=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		int n,s=0;
		scanf("%d",&n);
		for (int i=2;i<n;i++)
		if(n%i==0)
		s=1;
		if(s==0)
		if(n>max)
		max=n;
	}
	printf("%d",max);
}
