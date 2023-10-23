#include <stdio.h>
#include <math.h>

bool isArmstrong(int n)
{
	int nn=n;int mux;
	if (n==0) mux=1;
	float muxx=log10(n)+1;
	mux=(int)muxx;
	int i,sum=0;
	while (n>0)
	{
		int digit=n%10;
		sum+=pow(digit,mux);
		n/=10;
	}
	if (nn==sum) 
	{
	    printf("%d ",nn);
	    return true;
	}
	else return false;
}
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	for (i=0;count!=n;i++)
    {    
        if (isArmstrong(i)) count++;
    }
	return 0;
}

