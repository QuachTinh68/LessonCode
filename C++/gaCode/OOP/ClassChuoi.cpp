#include <bits/stdc++.h>
using namespace std;

class Chuoi{
	private:
		string chuoi;
		int chieudai;
	public:
		Chuoi(){
			chuoi="";
			chieudai=0;
		}
		Chuoi(string s){
			chuoi = s;
			chieudai= s.size();
		}
		void nhap();
		void in();
		void character(int i);
		Chuoi cong(Chuoi s);
};
 
void Chuoi::nhap(){
	cout << "\nNhap vao chuoi: ";
	getline(cin,chuoi);
	chieudai=chuoi.size();
}
void Chuoi::in(){
	cout << "\nChuoi cua ban la: " << chuoi << endl;
	cout << "\nDo dai: " << chieudai << endl;
}

void Chuoi::character(int i){
	string str= " ";
	if (i < 0 || i>=chieudai){
		cout <<"\nKhong co ki tu nay trong chuoi " << endl;
	}else{
		for (int f=0;f<chieudai;f++){
			if (f == i){
				str=chuoi[f];
			}
		}
		cout << "\nKi tu thu " << i << " trong chuoi la: " << str << endl;
		}	
}
Chuoi Chuoi::cong(Chuoi s){
	Chuoi nstr;
	nstr.chuoi = chuoi + s.chuoi;
	nstr.chieudai = nstr.chuoi.size();
	return nstr;
}

int main(){
	Chuoi s, s2, s3;
	s.nhap();
	s.in();
	int i;
	cout << "\nNhap so ki tu muon tim: " << endl;
	cin >> i;
	cin.ignore();
	s.character(i);
	cout << "\nNhap chuoi can cong: " << endl;
	s2.nhap();
	s3 = s.cong(s2);
	cout << "Chuoi sau khi cong la " << endl;
	s3.in();
}