#include <bits/stdc++.h>
using namespace std;
struct sinhvien{
	char hoten[20];
	int diem;
};
int main(){
	sinhvien a,b,c;
	cout << "Nhap sinh vien a: "<< endl;	
	cout <<"Nhap ten: ";gets(a.hoten);
	cout << "Nhap diem: ";cin >>a.diem;
	b=a;
	strcpy(c.hoten, a.hoten);
	c.diem= a.diem;
	cout << "Thong tin a: " << a.hoten <<" "<< a.diem << endl; 
	cout << "Thong tin b: " << b.hoten <<" "<< b.diem << endl; 
	cout << "Thong tin c: " << c.hoten <<" "<< c.diem; 
}