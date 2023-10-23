#include <bits/stdc++.h>
using namespace std;
struct thuoc{
	char ten[20];
	int nam;
	int soluong;
	float dongia;
};
void nhap(thuoc ds[], int n){
		do {
		fflush(stdin);
		cout << "\nNhap ten thuoc: ";
		gets(ds[n].ten);
		if (strcmp(ds[n].ten,"***")==0){
			break;
		}
		fflush(stdin);
		cout << "\nNhap nam het han: ";
		cin >> ds[n].nam;
		cout << "\nNhap so luong: ";
		cin >> ds[n].soluong;
		cout << "\nNhap gia: ";
		cin >> ds[n].dongia;
	}while (1);
}
void in (thuoc ds[], int n){
cout <<"\n Danh sach thuoc: "<< endl;
	for (int i=0;i<n;i++){
		cout << ds[i].ten <<"\t"<< ds[i].nam<<"\t"<<ds[i].soluong<<"\t"<<ds[i].dongia<< endl;		
	}
}
void check(thuoc ds[], int n){
	for (int i=0;i<n;i++){
		if (ds[i].nam<2023){
			cout << ds[i].ten <<"\t"<< ds[i].nam<<"\t"<<ds[i].soluong<<"\t"<<ds[i].dongia<< endl;		
		}
	}
}
int main(){
	int n; 
	cout << "Nhap so luong thuoc: "; cin >> n;
	thuoc a[100];
	nhap(a, n);
	in(a, n);
	check(a, n);
	return 0;
	
}