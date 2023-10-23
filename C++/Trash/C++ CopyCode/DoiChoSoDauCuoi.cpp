#include <stdio.h>
#include <math.h> 
int main(){
	int n,m,p,x;
	scanf("%d",&n);
	m=n%10;
	p=0;
	x=10;
	n=n/10;
	while(n/10!=0){
		p=p+(n%10)*x;
		x=x*10;
		n=n/10; 
	} 
	m=m*x+p+n;
	printf("%d",m); 
}
