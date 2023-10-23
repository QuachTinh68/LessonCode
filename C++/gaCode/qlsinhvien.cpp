//Sinhvien.cpp

#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;

struct  Sinhvien	
{    
     string masv;
     string hoten;
     float dtb ;
     Sinhvien  *next ;
};
//ham tim nut so gia tri cua truong masv la ms
//ham tra ve nut co gia tri truong masv la ms neu tim thay
//nguoc lai tra ve NULL
Sinhvien *timkiem(Sinhvien *f, string ms)
{   Sinhvien *p;
	for (p=f; p!=NULL; p = p->next)
		if (p->masv == ms)
			return p;
	return NULL;
}
//Nhap Sinhvien
Sinhvien * nhap(Sinhvien *f)
{  
   string ms ; 
   Sinhvien *p; 
   while (1)
   {
     fflush(stdin);
	 do
	 { 
	   cout<<"Nhap ma sinh vien: ";
	   getline(cin,ms);
     }while (timkiem(f,ms)!=NULL);
	  if (ms.length() !=0)
	   {   
	       p = new Sinhvien;//tao nut moi p
	       p->masv=ms;
	       cout<<"\nHo ten sinh vien: ";
	       getline(cin, p->hoten);
	       cout<<"\n Diem trung binh: ";
	       cin>>p->dtb;
	       p->next=NULL;
		   //gan nut p vao dau danh sach
		   if (f==NULL)
		  	  f=p;
	       else
	        { 
			  p->next = f;
			  f = p;
			}
	   }
	   else
	     break;  
   }
   return f;
} 

void   In(Sinhvien *f)
{ 
  Sinhvien *p; 
  for (p=f; p!=NULL; p = p->next)
    cout<<p->masv<<"  "<<p->hoten<<"   "<<p->dtb<<endl;
  cout<<endl; 
}

//sap xep theo ma Sinhvien
void traodoi(Sinhvien *p, Sinhvien *q) //hoan doi du lieu cua p va q
{
	string ms, ht;
	float tb;

	ms=p->masv;   
	p->masv=q->masv; 
	q->masv=ms; 

	ht=p->hoten;   
	p->hoten=q->hoten; 
	q->hoten=ht; 

    tb = p->dtb;
    p->dtb = q->dtb;
    q->dtb = tb;
}
void Sapxep(Sinhvien *f)
{
	Sinhvien *p, *q;

	for(p=f;p!=NULL;p=p->next)
	  for(q=p->next;q!=NULL;q=q->next)
	   	if (p->masv > q->masv)
			traodoi(p,q);
}


Sinhvien * BSCuoi(Sinhvien *f, Sinhvien *p)
{  
   if (f==NULL)
	f = p;
   else 
     { Sinhvien *q = f;
       while (q->next != NULL) //chuyen q ve nut cuoi
         q = q->next;
       q->next = p;  
     }
   return f;  
}

Sinhvien *Xoa(Sinhvien *f, string X)
{  
   Sinhvien *p, *pre;
   //tim kiem nut cxo gia tri X
   p = f;
   p = timkiem(f,X);
   
   if (p != NULL)  //tim duoc nut can xoa la p 
	 if (p == f)   //nut p cân xoa la nut dau
	       {    
		       f = f->next;
		       delete p;
	       }
      else       
         {
		  pre = f;
		  while (pre ->next != p) //tim nut pre ngay truoc nut p
		 	pre = pre ->next;
		  pre ->next = p->next; //thay doi lien ket
		  delete p;
		}
  return f;
}

int main()
{
	Sinhvien *first = NULL;
	first = nhap(first);
	In(first);
	
	Sapxep(first);
	cout<<"\n Danh sach sinh vien sau khi sap xep theo ma: \n";
	In(first);

	Sinhvien *p; string ms;
	p = new Sinhvien;
	do
	 { 
	   cout<<"Nhap ma sinh vien: ";
	   getline(cin,ms);
     }while (timkiem(first,ms)!=NULL);
	  
	 p->masv=ms;
	 cout<<"\nHo ten sinh vien: ";
	 getline(cin, p->hoten);
	 cout<<"\n Diem trung binh: ";
	 cin>>p->dtb;
	 p->next=NULL;
	 first = BSCuoi(first,p);
	 
	cout<<"\n Danh sach sinh vien sau khi bo sung cuoi: \n";
	In(first); 	
	fflush(stdin);
	cout<<"\n Nhap ma sinh vien can xoa: ";
	getline(cin,ms);
	
	first = Xoa(first,ms);	  
	
	cout<<"\n Danh sach sinh vien sau khi xoa: \n";
    In(first);

	
	return 0;
}
