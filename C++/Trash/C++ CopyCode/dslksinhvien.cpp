#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string masv;
	string hoten;
	float diemtb;
	sinhvien *next;
};
sinhvien *nhap(sinhvien *f){
	int num;
	cout <<"Nhap so luong sinh vien: "; cin >> num;
	sinhvien *p;
	f=NULL;
	for (int i=0;i<num;i++){
		cout << "Nhap thong tin sinh vien thu: " << i+1<< endl;
		p= new sinhvien;
		p->sinhvien=sinhvien;
		p->next=NULL;
		if (f==NULL){
			f=p;
		}else {
			p->next=f;
			f=p;
		}
	}
	return f;
}
void in(sinhvien *f){
	sinhvien *p;
	p=f;
	while (p!=NULL){
		cout << p->sinhvien << " ";
		p=p->next;
	}
}
int main(){
	sinhvien *f; 
	f=nhap(f);
	in(f);
}