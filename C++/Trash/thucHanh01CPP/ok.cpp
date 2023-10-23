#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
struct day{
	int ngay;
	int thang;
	int nam;
};
struct Khachhang{
	string maso;
	string hoten;
	string diachi;
	int chisocu;
	int chisomoi;
	struct day ngay;
	Khachhang *netx;
};
Khachhang *Nhap(Khachhang *f){
 	string maso;
 	int chisocu;
	int chisomoi;
 	Khachhang *p;
 	f=NULL;
 	do {
 		cout <<"Nhap ma so khach hang (trong de dung): ";
 		fflush(stdin);
 		getline(cin,maso);
 		if(maso != ""){
 			p = new Khachhang;
 			p->maso;
 			cout << "\n Nhap ten: ";
 			getline(cin,p->hoten);
 			cout << "\Nhap dia chi";
 			getline(cin,p->diachi);
 			cout<< "\nNhap chi so cu: ";
 				cin >> chisocu;
 			cout<<"\n Nhap chi so moi: ";
 				cin >> chisomoi;
 			cout<<"\nNhap ngay ghi: ";
 					getline(cin,p->ngay);
 			p->next=NULL;
 			
 			if (f==NULL)
 			f=p;
 			else{
 				KhachHang *q=f;
 				while(q->next!=NULL)
 					q=q->next;
 					q->next=p;
			 }
		}else 
		break;	
		}while(1);
	return f;
   		}
   		
 	
}
