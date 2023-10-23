#include<iostream>
using namespace std;
int main(){
int i,a,b,d;
cin>>a>>b;
i=a;
d=0;
while(i>=0){
	if((2*i+4*d)==b && i+d==a){
		cout<<i<<" "<<d<<endl;
		break;}
	if((2*i+4*d)!=b or i+d!=a){
	i=i-1;
	d=d+1;}
	if(i==0) cout<<-1;
}
return 0;	
}

