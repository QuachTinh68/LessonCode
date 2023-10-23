#include <bits/stdc++.h>
using namespace std;
struct date{
	int ngay;
	int thang;
	int nam;
};
struct sinhvien{
	char ten[20];
	struct date {
		int ngay;
		int thang;
		int nam;
	} ns;
} SV={ "Quach Tinh",15, 11, 2004} ;
int main(){
	cout << SV.ten <<" "<< SV.ns.ngay<< " "<< SV.ns.thang <<" "<< SV.ns.nam;
}