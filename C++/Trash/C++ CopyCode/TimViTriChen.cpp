#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
 void reverse(int a[], int n){
 	int l=0, r=n-1;
 	while(l<r){
 		int tmp=a[l];
 		a[l]=a[r];
 		a[r]=tmp;
 		++l ;--r;
	 }
 }
  void add(char a[], char b[]){
  	int  n1=strlen(a), n2=strlen(b),n=0;
  	int x[n1], y[n2], z[n1+1];
  	for(int i=0;i<n1;i++) x[i]=a[i]-'0';
  	for(int i=0;i<n2;i++) x[i]=b[i]-'0';
  	reverse(x, n1); reverse(y,n2);
  	for(int i=n2;i<n1;i++) {
  		y[i]=0;
  } 
  int mem=0;
  for(int i=0;i<n1;i++) {
  	int tmp = x[i] +y[i]+ mem;
  	z[n++] = tmp%10;
  	mem=tmp/10;
  }
  if(mem) z[n++] = mem;
  for (int i=n-1;i>=0;i--) cout << z[i];
}
int main(){
	int n;
	cin >>n;
	while(n--){
		char c[1001], d[1001];
		cin >> c >> d;
		if(strlen(c)>=strlen(d)) add(c,d);
		else add(d,c);
		cout << "\n";
	}	
}
  	
