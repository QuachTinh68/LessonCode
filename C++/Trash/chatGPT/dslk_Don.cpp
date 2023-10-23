#include <iostream>
#include<string>

using namespace std;

struct ngay
{
    int ngay;
    int thang;
    int nam;
};

struct khachhang
{
    string maso;
    string hoten;
    string diachi;
    int chisocu;
    int chisomoi;
    ngay ngayghi;
};

struct node_kh
{
    khachhang data;
    node_kh* pnext;
};

struct ds_kh
{
    node_kh* phead = NULL;
};

void them(ds_kh& ds, khachhang kh)
{
	node_kh* p = new node_kh;
	p->data = kh;
	p->pnext = NULL;

	if (ds.phead == NULL) 
	{
		ds.phead = p;
	}
	else
	{

		node_kh* q = ds.phead;
		while (q->pnext != NULL) 
		{
			q = q->pnext;
		}

		q->pnext = p;
	}
}

void nhap(khachhang &kh)
{
	cin.ignore();
	do
	{
		cout << "\nNhap ma so khach hang:";
		getline(cin, kh.maso);
		if (kh.maso.length() == 0)
			cout << "VUI LONG NHAP LAI" << endl;
	} while (kh.maso.length() == 0);
	cout << "\nNhap ho ten khach hang:";
	getline(cin, kh.hoten);
	cout << "\nNhap dia chi khach hang:";
	getline(cin, kh.diachi);
	cout << "\nNhap chi so cu khach hang:";
	cin >> kh.chisocu;
	cout << "\nNhap chi so moi khach hang:";
	cin >> kh.chisomoi;
	cout << "\nNhap ngay ghi:";
	cin >> kh.ngayghi.ngay;
	cout << "\nNhap thang ghi:";
	cin >> kh.ngayghi.thang;
	cout << "\nNhap nam ghi:";
	cin >> kh.ngayghi.nam;
}
void xuat(khachhang kh)
{
	cout << "Ma so khach hang la:" << kh.maso << endl;
	cout << "Ho ten khach hang la:" << kh.hoten << endl;
	cout << "Dia chi khach hang la:" << kh.diachi << endl;
	cout << "Chi so cu khach hang la:" << kh.chisocu << endl;
	cout << "Chi so moi khach hang la:" << kh.chisomoi << endl;
	cout << "Ngay ghi khach hang la:" << kh.ngayghi.ngay<< endl;
	cout << "Thang ghi khach hang la:" << kh.ngayghi.thang << endl;
	cout << "Nam ghi khach hang la:" << kh.ngayghi.nam << endl;
}
void xuatds(ds_kh ds)
{
	node_kh* p = ds.phead;
	while (p!= NULL)
	{
		xuat(p->data);
		cout << "---------------------------" << endl;
		p = p->pnext;
	}
}

int main()
{
	ds_kh ds;
	khachhang kh;
	while (true)
	{
		system("cls");
		cout << "**********************************" << endl;
		cout << "1.Them thong tin khach hang" << endl;
		cout << "2.Xuat khach hang" << endl;
		cout << "3.in hoa don" << endl;
		cout << "4.so tien lon nhat" << endl;
		cout << "5.Luu vao file" << endl;
		cout << "6.Thoat" << endl;
		cout << "------------------------------------------" << endl;
		cout << "\nNhap lua chon:";
		int chon;
		cin >> chon;
		if (chon == 1)
		{
			nhap(kh);
			them(ds, kh);
		}
		else if(chon == 2)
		{
			xuatds(ds);
			system("pause");
		}
		else if (chon == 6)
		{
			break;
		}
	}
}