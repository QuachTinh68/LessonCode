#include<iostream>
using namespace std;
int main(){
	int a,b,c,d=0;
	cin>>a>>b>>c;
	while(c>=0){
		if(c<=a){d++;
		break;
		}
		c=c-a+b;
		d++;
	}
	cout<<d;
	
}