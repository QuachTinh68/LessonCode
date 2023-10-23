#include <bits/stdc++.h>
int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	long long max= A[0], a1= -10e17 , a2= -10e17;
	for (int i=0; i<n; i++)
		scanf ("%d", &A[i]);
	for (int i=0; i<n; i++){
		if (max<A[i])
		{a2= a1;
		a1=max;
		max= A[i];
		}
		else
			if (A[i]>a1)
			{ 
			a2=a1;
			a1 = A[i];
			}
			else 
				if (A[i]> a2)
				a2=A[i];
			}		
	printf ("%d %d %d", max, a1, a2);
	return 0;
}
