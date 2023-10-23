# include <stdio.h>

int main()
{
    int s,t,i,j,h,soKetQua=0;
    scanf("%d %d",&s,&t);
    for (i=0;i<=s;i++)
     for (j=0;j<=s;j++)
      for (h=0;h<=s;h++)
       if (i+j+h<=s && i*j*h<=t) soKetQua++;
    printf("%d",soKetQua);
    return 0;
} 
