#include<stdio.h>
#include<math.h>

int NguyenTo(int k)
{
	for (int i=2;i<=sqrt(k);i++)
		if (k%i==0) return 0;
	return 1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for (i=2;i<=n;i++)
		if (NguyenTo(i)==1) printf("%d ",i);
	return 0;
}
