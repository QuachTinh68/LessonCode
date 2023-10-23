#include <bits/stdc++.h>
using namespace std;

class Vecto{
	private:
		int *arr;
		int kt;
	public:
		void nhap();
		void in();
		int tichvohuong(Vecto v2);
		float modun();
};

void Vecto::nhap(){
	cout <<"Nhap kich thuoc cua vecto: " << endl;
	cin >> kt;cin.ignore();
	arr = new int [kt];
	cout << "Nhap cac phan tu cua Vecto " << endl;
	for (int i=0;i<kt;i++){
		cin >> arr[i];
	}
}

void Vecto::in(){
	cout << "Cac phan tu trong vecto la: " << endl;
	for (int i=0;i<kt;i++){
		cout << arr[i] << " ";
	}
}

int Vecto::tichvohuong(Vecto v2){
	int tich=0;
	if (kt == v2.kt){
		for(int i=0;i<kt;i++){
			tich += arr[i]*v2.arr[i];
		}
		return tich;
	}else {
		cout << "Hai veto khong cung kich thuoc" << endl;
		return 0;
	}
}

float Vecto::modun(){
	float mod=0;
	for(int i=0;i<kt;i++){
		mod += pow(arr[i],2); 
	}
	return sqrt(mod);
}

int main(){
	Vecto v,v2;
	int tich;
	v.nhap();
	v.in();
	cout << "\nNhap cac phan tu vecto 2"  << endl;
	v2.nhap();
	tich=v.tichvohuong(v2);
	cout << "\nTich vo huong hai vecto la" << endl;
	cout << tich <<endl;
	float m = v.modun();
	cout <<"\nModun cua vecto la: " << endl;
	cout <<m;
}