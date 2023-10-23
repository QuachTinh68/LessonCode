include<stdio.h>
#include<math.h>
int so_ngto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n,t=0;
	scanf("%d",&n);
	while(n!=0){
		t=t*10+n%10;
		n=n/10;
	}
	if(so_ngto(t)==1){
		printf("%d YES",t);
	}
	else{
		printf("%d NO",t);
	}
	
}

