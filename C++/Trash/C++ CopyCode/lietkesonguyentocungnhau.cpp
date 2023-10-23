#include<stdio.h>
int main()
{
	int a,n,uocchung;
	scanf("%d%d",&a,&n);
	int b[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		uocchung=0;
		for(int j=1;j<=b[i];j++)
		{
			if((a%j==0) && (b[i]%j==0))
			{
				uocchung=j;
			}
		}
		if(uocchung==1)
		{
			printf("%d\n",b[i]);
		}
	}
}