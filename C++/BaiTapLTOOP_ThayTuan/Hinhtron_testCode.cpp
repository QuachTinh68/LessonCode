#include <bits/stdc++.h>
using namespace std;
 class Hinhtron{
 	private:
 		float x,y,R;
 	public:
 		void nhap();
 		void in();
 		Hinhtron(){
 			x=y=R=0;
		 }
		float get_x(){
			return x;
		}
		float get_y(){
			return y;
		}
 };
 
void Hinhtron::nhap(){
	cout << "\nNhap hoanh do: ";
	cin >> x;
	cout << "\nNhap tung do: ";
	cin >> y;
	cout << "\nNhap ban kinh: ";
	cin >> R;
}

void Hinhtron::in(){
	cout << "\n\n----------------------------------";
	cout << "Hinh tron co toa do (" << x << ":" << y << ")" << "Ban kinh" << R << endl;
	cout << "\n\n----------------------------------";
}
class Quanli{
	private:
		Hinhtron ht[100];
		int n;
	public:
		void nhapds();
		void inds();
		Hinhtron XuatTruc();	
};

void Quanli::nhapds(){
	string key;
	int i=0;
	while (true){
		ht[i].nhap();
		if (ht[i].get_x() == 27) break;
		i++;
	}
		
}
void Quanli::inds(){
	for (int i=0;i<n;i++){
		ht[i].in();
	}
}

Hinhtron Quanli::XuatTruc(){
	Hinhtron f;
	for (int i=0;i<n;i++){
		if (ht[i].get_y() == 0){
			f=ht[i];
		}
	}
	return f;
}

int main(){
	Quanli ob;
	ob.nhapds();
	ob.inds();
	Hinhtron z= ob.XuatTruc();
	z.in();
	return 0;
}