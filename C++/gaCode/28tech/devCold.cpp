#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv;
	double diem;
	string diachi;
};

int main(){
	SinhVien x;
	getline(cin, x.msv);
	cin.ignore();
	cin >> x.diem;
	cin.ignore();
	getline(cin, x.diachi);
	cout << x.msv << " " << x.diem << " "<< x.diachi << endl;
}
