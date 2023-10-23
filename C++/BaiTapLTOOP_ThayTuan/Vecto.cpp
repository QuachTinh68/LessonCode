#include <bits/stdc++.h>
using namespace std;

class Vecto{
	private:
		int kt;
		int *arr;
	public:
		void Nhap();
		void Xuat();
		int tichVoHuong(Vecto v2);
		float Modun();
};

void Vecto::Nhap(){
	cout << "Nhap kich thuoc cua vecto" << endl;
	cin >> kt;
	cin.ignore();
	if (kt > 0){
		arr = new int[kt];
		cout << "Nhap so toa do vec to: "<< endl;
		for (int i=0;i<kt;i++){
			cin >> arr[i];
		}
	}else{
		cout << "Kich thuoc khong hop le." <<endl;
        arr = NULL;	
	}
}

void Vecto::Xuat(){
	for (int i=0;i<kt;i++){
		cout << arr[i]<< " ";
	}
	cout << endl;
}

int Vecto::tichVoHuong(Vecto v2){
	int tich=0;
	if (kt != v2.kt) {
        cout << "Hai vecto co kich thuoc khac nhau, khong the tinh tich vo huong." << endl;
        return 0;
    }
	for (int i=0;i<kt;i++){
			tich += arr[i]*v2.arr[i];
		}
    return tich;	
}

float Vecto::Modun(){
	float mod=0;
	for (int i=0;i<kt;i++){
		mod+= pow(arr[i],2);
	}
	return sqrt(mod);
	
}

int main(){
	Vecto v,v2;
	v.Nhap();
	v2.Nhap();
	cout << "Cac phan tu cua vecto 1 la: " <<endl;
	v.Xuat();
	cout << "Cac phan tu cua vecto 2 la: " <<endl;
	v2.Xuat();
	cout << "Tich vo huong cua hai vecto la: " << v.tichVoHuong(v2)<<endl;
	
	cout << "Modun cua vecto 1 la: " << v.Modun()<<endl;
	cout << "Modun cua vecto 2 la: " << v2.Modun()<<endl;
	
}