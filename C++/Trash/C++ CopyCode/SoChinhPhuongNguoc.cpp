#include<stdio.h>
#include<math.h>
int socp(int n){
	int p=sqrt(n);
	if (n<1) return 0;
	if(p*p==n) return 1;
	else return 0;
}
int main(){
	int n,t=0;
	scanf("%d",&n);
	while(n!=0){
		t=t*10+n%10;
		n=n/10;
		
	}
	if(socp(t)==1){
		printf("%d YES",t);
		
	}
	else{
		printf("%d NO",t);
	}
	
	
	
	return 0;
}
