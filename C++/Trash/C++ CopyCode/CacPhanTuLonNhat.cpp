#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n ;
	cin >> m >> n ;
	int a[m][n] ;
	for (int i=0 ; i<m ;i++) 
	 	for (int j=0 ; j<n ;j++) {
			cin >> a[i][j] ;}
	 int maxrow;
	 	 for (int i=0 ; i< m ;i++) {
	 		maxrow=a[i][0] ;
	 	 		for (int j=1 ;j< n ; j++){
	 	 	if (a[i][j]> maxrow){
				maxrow=a[i][j] ;}
			}
		cout << maxrow << " " ; }
		cout << endl; 
	 int maxcol;
		 for (int j=0 ; j<n ; j++) {
		 	maxcol=a[0][j] ;
			 	 for (int i=1 ; i< m ;i++){
			 	if (a[i][j]> maxcol){

				 maxcol = a[i][j] ; 
		 }
	}
		cout << maxcol << " "  ;
	}
	
