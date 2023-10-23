#include <bits/stdc++.h>
using namespace std;

class Mang{
	private:
		int kichThuoc;
		int *arr;
	public:
		void Nhap();
		void Xuat();
		Mang cong(Mang a2);		
};

void Mang::Nhap(){
	cout << "Nhap kich thuoc cua mang: " << endl;
	cin >> kichThuoc;
	cin.ignore();
	arr = new int[kichThuoc];
	if (arr == NULL){
		cout << "\nLoi cap phat bo nho" << endl;
		exit(0);
	}
	else{
		cout << "Nhap phan cac phan tu trong mang :" << endl;
		for (int i=0;i<kichThuoc;i++){
			cin >> arr[i];
		}
	}
}

void Mang::Xuat(){
	cout << "Danh sach cac phan tu trong mang la: " << endl;
	for (int i=0;i<kichThuoc;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

Mang Mang::cong(Mang a2){
	Mang sum;
	if (kichThuoc != a2.kichThuoc){
		cout << "Khong the thuc hien phep cong. Hai mang co kich thuoc khac nhau." <<endl;
		exit(0);
	}else {     
        sum.kichThuoc = kichThuoc;
		sum.arr = new int[kichThuoc];
		for (int i=0;i<kichThuoc;i++){
			sum.arr[i]= arr[i]+ a2.arr[i];
		}
    }
    return sum;
	
}
int main(){
	Mang a,a2;
	cout << "Nhap mang thu nhat " << endl;
	a.Nhap();
	cout << "Nhap mang thu hai "<< endl;
	a2.Nhap();
	a.Xuat();
	a2.Xuat();
	
	Mang tong=a.cong(a2);
	cout << "Tong hai mang la: " << endl;
	tong.Xuat(); 
	
}