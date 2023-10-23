#include<bits/stdc++.h>
using namespace std;
struct songuyen{
	int n;
	songuyen *next;
};
songuyen *nhap(songuyen *f){
	int k;
	songuyen *p;
	f=NULL;
	do {
		cout << "Nhap so nguyen (nhap 0 dung lai): ";
		cin >> k;
		if (k==0){
			break;
		}
		p= new songuyen;
		p->n=k;
		p->next=NULL;
		if (f==NULL){
			f=p;
		}else {
			p->next=f;
			f=p;
		}
	}while(true);
	return f;
}
void in(songuyen *f){
	songuyen *p;
	p=f;
	while (p!=NULL){
		cout << p->n << " ";
		p=p->next;
	}
}
int main(){
	songuyen *f; 
	int n;
	f=nhap(f);
	in(f);
}
