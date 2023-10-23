#include <bits/stdc++.h>
using namespace std;
struct sinhvien{
	char hoten[20];
	int namsinh;
};
int main(){
	sinhvien ds[100];
	int n;
	sinhvien tmp;
	cout << "Nhap so sinh vien: "; cin >>n;
	cout << endl;
	for (int i=0;i<n;i++){
		cout << "Nhap sinh vien thu: " << i+1<< endl;
		fflush(stdin);
		cout << "Nhap ten: "; gets(ds[i].hoten);
		fflush(stdin);
		cout << "Nhap nam sinh: "; cin >> ds[i].namsinh;
	}
	for (int i=0;i<n;i++){
		if (ds[i].namsinh==2000){
			cout << "Danh sach sinh vien sinh nam 2000: "<< endl;
			cout << ds[i].hoten << endl;
		}
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (strcmp(ds[i].hoten,ds[j].hoten)>0){
				tmp=ds[i];
				ds[i]=ds[j];
				ds[j]=tmp;
			}
		}
	}
	cout << "Danh sach sinh vien da sap xep: "<< endl;
	for (int i=0;i<n;i++){
		cout << ds[i].hoten<< endl;
	}
}