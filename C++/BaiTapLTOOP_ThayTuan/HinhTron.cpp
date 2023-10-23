#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class Hinhtron{
	private:
		float x,y,R;
	public:
		Hinhtron *next;
		Hinhtron() {
		    x = 0;
		    y = 0;
		    R = 0;
		    next = NULL;
		}
		Hinhtron(float hoanh, float tung, float bk){
			x=hoanh;
			y=tung;
			R=bk;
			next = NULL;
		}
		void nhap();
		void xuat();
		float get_x(){
			return x;
		}
		float get_y(){
			return y;
		}
		float get_R(){
			return R;
		}
		void setX(float hoanh){
			x=hoanh;
		}
		void setY(float tung){
			y=tung;
		}
		void setR(float bk){
			R=bk;
		}
};

void Hinhtron::nhap(){
	cout <<"\nNhap hoanh do: ";
	cin >> x;
	cout << "\nNhap tung do: ";
	cin >> y;
	cout << "\nNhap ban kinh: ";
	cin >> R;
}
void Hinhtron::xuat(){
	cout << "Tam (" << x << ", " << y << "), Ban kinh: " << R << endl;
}

class Quanli{
	private:
		Hinhtron *first;
	public:
		Quanli(){
			first = NULL;
		}
		void boSung(Hinhtron *ht);
		void InTrucHoanh();
		void nhapDS();
};

void Quanli::boSung(Hinhtron *ht){
	if (!first){
		first = ht;
	}else{
		Hinhtron *cur = first;
		while (cur->next){
			cur = cur->next;
		}
		cur->next = ht;
	}
}
void Quanli::InTrucHoanh(){
	Hinhtron *cur = first;
	while(cur){
		if (cur->get_y()==0){
			cur->xuat();
		}
		cur = cur->next;
	}
}

void Quanli::nhapDS(){
	char key;
        while (true) {
            key = _getch(); //dung de doc mot phim tu bam phim khong can enter
            if (key == 27) // 27 ma ASCII cua ESC
                break;
            Hinhtron *hinhtron = new Hinhtron();
            hinhtron->nhap();
            boSung(hinhtron);
        }
}

int main(){
	Quanli ob;
	cout <<"\nNhap thong tin hinh tron (nhan ESC de ket thuc):";
	ob.nhapDS();
	cout << "\nCac hinh tron co tam tren truc hoanh:\n";
	ob.InTrucHoanh();
}