#include <bits/stdc++.h>
using namespace std;
void xuatMang(int a[], int n){
	for (int i=0;i<n;i++){
		cout << a[i]<< " ";
	}
}
void nhapMang(int a[], int n){
	for (int i=0;i<n; i++){
		cin >> a[i];
	}
}
void hoanvi(int &a , int &b){
 	int temp=a;
 	a=b;
 	b=temp;
 }
void sapxepMang(int a[], int n){
	int temp[n];
	for (int i=0;i<n-1; i++){
		for(int j=i;j<n;j++){
			if (a[i]<a[j]){
			hoanvi(a[i], a[j]);	
			}
		}
	}

 }
int main(){
	int n; cin >> n;
	int a[n];
	nhapMang(a, n);
	sapxepMang(a, n);
	xuatMang(a, n);
}
