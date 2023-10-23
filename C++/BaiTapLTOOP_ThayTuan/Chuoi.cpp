#include <bits/stdc++.h>
using namespace std;

class Chuoi{
	private:
		string str;
		int n;
	public:
		Chuoi(){
			str=" ";
			n=str.size();
		};
		Chuoi(string st){
			str=st;
			n=st.size();
		}
		void Nhap();
		void Xuat();
		string Character(int i);
		Chuoi Cong(Chuoi str2);
};

void Chuoi::Nhap(){
	cout << "Nhap chuoi: " << endl;
	getline(cin,str);
	n=str.length();
}
void Chuoi::Xuat(){
	cout << "Chuoi la: " << str << endl;
	cout << "Do dai cua chuoi la: " << n << endl;
}

string Chuoi::Character(int i){
	if (i<0 || i>=n){
		cout << "Khong co ki tu nay trong chuoi." << endl;
		return " ";
	}
	return string(1,str[i-1]);
}

Chuoi Chuoi::Cong(Chuoi str2){
	Chuoi res;
	res.str= str +" "+ str2.str;
	res.n=res.str.length();
	return res;
}

int main(){
	Chuoi st,st2;
	st.Nhap();
	st.Xuat();
	int i;
	cout << "Nhap thu tu chu can xuat: " << endl;
	cin >> i;
	cin.ignore();
	string total=st.Character(i);
	cout << "Chu cai ung voi thu tu thu " << i << " la: "<<total << endl;
	
	cout <<"Nhap chuoi can cong: " << endl;
	st2.Nhap();
	st2.Xuat();
	Chuoi cong;
	cong=st.Cong(st2);
	cong.Xuat();
}