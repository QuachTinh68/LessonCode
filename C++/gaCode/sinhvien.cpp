#include <iostream>
#include <string>
#define MAX 3
using namespace std;
struct Sinhvien
{
string hoten;
float dtb;
};
int main()
{
	Sinhvien sv[MAX];
	int i;
	for(i = 0; i < MAX; i++ )
	{ cout<<"\nNhap chi tiet sinh vien "<<i+1<<endl;
	cout<<"Nhap ho ten: ";
	getline(cin,sv[i].hoten);
	cout<<"Nhap dtb: ";
	cin>>sv[i].dtb;
	cin.ignore();
	}
	cout<<"\n";
	cout<<"Ho ten\t\t Diem trung binh\n";
	for(i = 0; i < MAX; i++ )
	cout<< sv[i].hoten<<"\t"<< sv[i].dtb<<endl;

return 0;
}