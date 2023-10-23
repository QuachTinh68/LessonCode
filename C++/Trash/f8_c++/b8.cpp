#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	float x;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	if (a==0 && b==0){
		cout << "Vo so nghiem";
	}else if (a==0 && b!=0){
		cout << "Vo nghiem";
	}else if (a!=0){
		x=float (-b/a);
		cout <<"Nghiem cua phuong trinh la: "<< x;
	}
}