#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, countChan, countLe, countAm, countDuong;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];		
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			countAm++;
		}
		if(a[i]<0){
			countDuong++;
		}
		if(a[i]%2==0){
			countChan++;
		}
		if(a[i]%2!=0){
			countLe++;
		}
	}
	cout<<countAm<<endl<<countDuong<<endl<<countChan<<endl<<countLe;
}