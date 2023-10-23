#include<bits/stdc++.h>
using namespace std;
bool checkChinhPhuong(int n,int a[]){
	for(int i=0;i<n;i++){
		if(sqrt(a[i])/sqrt(a[i])==0){
			return 1;
		}
		return 0;
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count;
	for(int)
}