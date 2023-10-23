#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string id,ten,ns;
		double gpa;
	public:
//		SinhVien();
		void xinChao();
		void Nhap();
		void in();
		void tamBiet();
		double getGPA();
		friend void inThongTin(SinhVien);
//		~SinhVien(){
//			cout <<"Ham da duoc dong"	;
//		};
};
//SinhVien::SinhVien(){
//	cout<<"Ham da duoc tao\n";
//}
void inThongTin(SinhVien a){
	cout << a.id << "  " << a.ten;
}

void SinhVien::xinChao(){
	cout << "Hello\n";
}



double SinhVien::getGPA(){
	return this->gpa;
}

void comp(SinhVien a[],int n){
	SinhVien tmp;
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++){
			if (a[i].getGPA() < a[j].getGPA()){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
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
	x.Nhap();
	inThongTin(x);
	return 0;
}