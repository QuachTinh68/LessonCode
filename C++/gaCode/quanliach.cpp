#include<bits/stdc++.h>
using namespace std;
struct sach{
	string masach;
	string tensach;
	string tacgia;
	int sol;
void nhap(){
	for(int i=0;i<n;i++){
	cin.ignore();
	do{
		ok=0;
		cout<<"nhap ma sach:";
		getline(cin,a[i].masach);
		for(int j=0;j<i;j++)
			if(a[j].masach==a[i].masach){
				ok=1;
				break;
		}
	}
	while(ok==1);
		cout<<"nhap ten sach:";
		getline(cin,tensach);
		cout<<"nhap ten tac gia:";
		getline(cin,tacgia);
		cout<<"nhap so luong:";
		cin>>sol;
		
	
}
	void in(){
		cout<<endl<<"---------------------"<<endl;
		cout<<"ma sach:"<<masach<<endl;
		cout<<"ten sach:"<<tensach<<endl;
		cout<<"tac gia:"<<tacgia<<endl;
		cout<<"so luong:"<<sol<<endl;
		cout<<"----------------------"<<endl;
	}
};
string sapxep(sach a[],int n){
	sach tmp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].masach > a[j].masach){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;	
			}	
		}
	}
}
int main(){
	sach a[50];
	int n,ok;
	string st;
	cout<<"nhap dau sach:";cin>>n;
	nhap(a, n);
	sapxep(a,n);
	for(int i=0;i<n;i++){
		a[i].in();
	}
	return 0;
}