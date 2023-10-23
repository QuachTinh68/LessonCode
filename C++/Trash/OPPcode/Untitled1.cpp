#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string id,ten,ns;
		double gpa;
	public:
		SinhVien();
		void xinChao();
		void Nhap();
		void in();
		void tamBiet();
		~SinhVien(){
			cout <<"Ham da duoc dong"	;
		};
};
SinhVien::SinhVien(){
	cout<<"Ham da duoc tao\n";
}
void SinhVien::xinChao(){
	cout << "Hello\n";
}

void SinhVien::Nhap(){
	cout << "Nhap id: "; cin >> id ;
	cin.ignore();
	cout<< "Nhap ten: ";getline(cin,ten);
	cout <<"Nhap ngay sinh: ";getline(cin,ns);
	cout << "Nhap diem gpa: ";cin >> gpa;
}
void SinhVien::in(){
	cout << id<<" " << ten <<" "<< ns <<" "<< fixed << setprecision(2)<< gpa << "\n";
}

void SinhVien::tamBiet(){
	cout << "Goodbye\n";
}

int main(){
	SinhVien x;
	x.xinChao();
	x.Nhap();
	x.in();
	x.tamBiet();
}