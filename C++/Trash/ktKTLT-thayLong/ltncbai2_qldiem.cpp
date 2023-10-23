#include <bits/stdc++.h>
using namespace std;
struct thisinh{
	char hoten[50];
	float toan, li,hoa, tong;
};
void nhap(thisinh ds[], int n){
	float diemchuan;
	for (int i=0;i<n;i++){
		fflush(stdin);
		cout << "Nhap thong tin sinh vien thu: "<<i+1 <<endl;
		do {
			cout << "Nhap ten: ";
			gets(ds[i].hoten);
			if (strlen(ds[i].hoten)==0){
				break;
			}
			fflush(stdin);
			cout << "\n Nhap diem toan: "; cin >> ds[i].toan;
			cout << "\n Nhap diem li: "; cin >> ds[i].li;
			cout << "\n Nhap diem hoa: "; cin >> ds[i].hoa;
			ds[i].tong=	ds[i].toan+ds[i].li+ds[i].hoa;						
		}while(true);
	}
	cout <<"\n Nhap diem chuan: "; cin >> diemchuan;
	for (int i=0;i<n;i++){
		ds[i].tong=ds[i].toan+ds[i].li+ds[i].hoa;
		if (ds[i].tong >=diemchuan && (ds[i].toan*ds[i].li*ds[i].hoa >0)){
			cout << ds[i].hoten<< " trung tuyen" << endl;
		}
	}
	
}
void in(int n, thisinh ds[]){
		cout << "\n Danh sach sinh vien\n";
		cout << "Ten SV 	Toan	Ly		Hoa		Tong\n";
		for(int i=0;i<n;i++){
			cout << ds[i].hoten <<"\t" <<ds[i].toan<<"\t"<< ds[i].li <<"\t"<<ds[i].hoa <<"\t"<< ds[i].tong <<endl;
		}
}
//void thukhoads(thisinh ds[], int n){
//	thisinh max;
//	for 
//	
//}
int main(){
	int n;
	cout << "Nhap so luong sinh vien: ";cin >> n;
	fflush(stdin);
	thisinh a[n];
	nhap(a, n);
	in(n, a);
}