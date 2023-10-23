#include<iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i-1]>a[i]){
		cout<<"No";
		return 0;
	}
}
cout<<"Yes";
}
