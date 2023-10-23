#include<bits/stdc++.h>
using namespace std;
int snt(int n) {
	if (n==1) return false ;
	else 
		for (int i=2 ; i<= sqrt(n) ; i++) 
		if (n%i==0) return false ; 
}
	
int main ()
 {
 	int dem=0 ; 
	int N ; 
	cin >> N ;
	int a[N] ; 
	for (int i=0 ; i<N ; i++)
		cin >> a[i] ;
	for (int i=0 ; i<N ; i++)
		if (snt(a[i]) and (a[i]>100) and (a[i]<999) )
		  dem++ ; 
	cout << dem ; 
	return 0 ;
}

