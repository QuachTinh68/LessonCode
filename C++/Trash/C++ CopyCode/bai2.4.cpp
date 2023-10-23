#include<bits/stdc++.h>
using namespace std;
void NhapMangSoThuc(float a[], int n){
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}
void XuatCacPhanTuAm( float a[] ,int n)
{
	for (int i=0 ; i<n ;i++)
	{
		if (a[i]<0) cout << a[i] << " " << endl;
	}
}
int  ViTriPhanTuLonNhatCuaMang( float a[], int n){
	int i, vtmax=0;
	float max;
    max= a[0];
    for (i = 0; i < n; i++)         
        if (a[i] > max)
        { 
			max = a[i];
			vtmax=i;
		}         
    return vtmax;
}
int ViTriPhanTuNhoNhatCuaMang(float a[], int n){
	int i, vtmin=0;
	float min;
    min= a[0];
    for (i = 0; i < n; i++)         
        if (a[i] < min)
		{
        	min = a[i];
        	vtmin=i;
		}           
    return vtmin;
}
int TimPhanTuAmDauTien(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            return i;
        }
    }
    return -1;
}
int TongCacSoDuongTrongMang (float a[], int n, float TongSoDuong){
	TongSoDuong=0.0;
	for (int i=0; i<n;i++){
		if (a[i]>0)
		{
			TongSoDuong=TongSoDuong+a[i];
		}
	}
	return TongSoDuong;
}
void SapXepTheoThuTuTangAmGiamDuong(float a[], int n) {
  int dem = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] < 0) {
      float temp = a[i];
      for (int j = i; j > dem; j--) {
        a[j] = a[j - 1];
      }
      a[dem] = temp;
      dem++;
    }
  }

  for (int i = 0; i < n - dem; i++) {
    for (int j = i + 1; j < n - dem; j++) {
      if (a[i] > a[j]) {
        float temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
//int  XoaPhanTuViTriLe(float  a[], int &n){
// int dem=0;
//  for (int i = 0; i = n; i--) {
//    if (i % 2 != 0) 
//     a[i]= a[i]+1;
//	}
//	return a[i];	
//}
void  menu(){
	cout << "Chon chuc nang muon su dung: " << endl;
	cout << "1. Xuat cac phan tu am cua mang." << endl;
	cout << "2. Vi tri phan tu lon nhat cua mang." << endl;
	cout << "3. Vi tri phan tu nho nhat cua mang." << endl;
	cout << "4. Viet ham tim phan tu am dau tien" << endl;
	cout << "5. Tinh tong cac so duong trong mang (error 404 !!!!!!!!!!)" << endl;
	cout << "6. Sap xep theo thu tu tang dan am va giam dan so duong"<< endl;
	cout << "7. Xoa cac phan tu le trong mang" << endl;}
int main(){
	int n, chon;
	float a[100];
	cout << a ;
	cout << "\nNhap so luong phan tu cua mang: ";
	cin >> n; NhapMangSoThuc(a, n);
	menu();
	do {
	cout << "Nhap chuc nang ban muon dung " << endl; cin >> chon;
	switch(chon){
		case 1:
			cout << "Cac phan tu am cua mang: "  << endl;
			XuatCacPhanTuAm(a, n);
			break;
		case 2:
			cout << "Vi tri phan tu lon nhat cua mang la: "<< 	ViTriPhanTuLonNhatCuaMang(a, n) << endl;			
			break;
		case 3:
			cout << "Vi tri phan tu nho nhat cua mang la: "<< ViTriPhanTuLonNhatCuaMang(a, n)  << endl;			
			break;
		case 4:
			cout << "Phan tu am dau tien, neu khong co tra ve -1: " <<TimPhanTuAmDauTien(a, n) << endl;
			break;
//		case 5:
//			cout << "Tong cac so duong trong mang la "<< TongCacSoDuongTrongMang(a, n, TongSoDuong) << endl;
//			break;
		case 6:
			SapXepTheoThuTuTangAmGiamDuong(a, n);
			cout << " Mang sau khi sap xep la "  << endl;
				for (int i = 0; i < n; i++)
				{
				cout << a[i] << " ";
				}
			cout << endl;
			break;
//		case 7:
//			XoaPhanTuViTriLe(a, n);
//			cout << "Mang sau khi xoa cac phan tu vi tri le la: " << endl;
//			for (int i = 0; i < n; i++)
//			{
//				cout << a[i] << " ";
//			}
//			cout << endl;
//		break;
		default:
			cout << "Khong co chuc nang nay." << endl;
			break;
		} 
	}
	while(n==0); 
	return 0;
}
