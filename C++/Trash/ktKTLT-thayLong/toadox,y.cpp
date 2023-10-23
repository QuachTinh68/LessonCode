#include <bits/stdc++.h>
using namespace std;
struct point{
	char ten[5];
	float x,y;
};
int main(){
	point t;
	cout << "Nhap ten toa do: ";
	gets(t.ten);
	cout << "Nhap toa do x: ";cin >> t.x;
	cout << "Nhap toa do y: "; cin >> t.y;
	cout <<" Toa do cac truong"<< endl;
	cout << t.ten<<" "<< t.x <<" "<< t.y;
}