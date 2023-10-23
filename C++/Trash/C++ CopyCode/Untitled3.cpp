#include<bits/stdc++.h>
#include<string.h>
using namespace std;
struct sinhvien{
	string masv;
	string hoten;
	float diemtb;
	sinhvien *next;
};
sinhvien *timkiem(sinhvien *f, string ms){
	sinhvien *p;
	for (p=f;p!=NULL; p=p->next){
		if (p->masv==ms){
			return p;
		}
		return NULL;
	}
}
sinhvien *nhap(sinhvien *f){
 string ms;
 sinhvien *p;
 while(1){
 	fflush(stdin);
 	do{
 		cout <<"Nhap ma sinh vien: ";
 		getline(cin, ms);
	 }while (timkiem(f, ms) !=NULL);
	 if (ms.length()!=0)
	 	{
	 		p=new sinhvien;
	 		p->masv=ms;
	 		cout << "/n Nhap ho ten sinh vien: ";
	 		getline(cin, p->hoten);
	 		cout <<"/n Nhap diem TB: ";
	 		cin >> p->diemtb;
	 		p->next=NULL;
	 		if (f==NULL){
	 			f=p;
			 }else {
			 	p->next=f;
			 	f=p;
			 }
		 }
		 else 
		 	break;
 	}
 	return f;
}
void sapxep(sinhvien *f){
	sinhvien *p, *q;
	sinhvien temp;
	for (p=f; p!=NULL;p=p->next){
		for (q=p->next;p!=NULL;q=q->next){
			if (p->masv > q->masv){
				temp = p->sinhvien;
				p->sinhvien=q->sinhvien;
				q->sinhvien=temp;
			}
		}
	}
}
void in(sinhvien *f){
	sinhvien *p;
	for (p =f; p!=NULL;p=p->next){
		cout << p->masv << "   "<< p->hoten <<"   "<<p->diemtb;
		cout << endl;
	}
}
int main(){
	sinhvien *f;
	f=nhap(f);
	in(f);
}