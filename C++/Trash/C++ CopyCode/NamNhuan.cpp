#include<stdio.h>
int check(int x)
{
	if((x % 400 == 0) || (x%4 == 0) && (x%100 !=0))
	{
		return x>1;
	}
	else 
	{
		return 0;
	}
}
int main()
{
	int n;
	scanf ("%d",&n);
	int x;
	for(int i =0;i <n;i++)
	{
		scanf ("%d",&x);
		if(check(x))
		{
			printf ("leap year\n");
		}
		else 
		{
			printf ("none\n");
		}
	}
}
