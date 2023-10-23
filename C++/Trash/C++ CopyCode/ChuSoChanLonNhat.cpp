#include<stdio.h>
#include<math.h>

main(){
	long long n;
	scanf("%d", &n);
	int max = 0;
	while(n != 0){
		int temp = n % 10;
		if(temp % 2 == 0)
		{
			if(temp > max)
				max = temp;
		}
		n /= 10;
	}
	printf("%d", max);
}

