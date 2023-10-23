#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x<=y){
		cout<<x<<" "<<y<<" ";
		cout<<setprecision(3)<<fixed<<(double)x/y;
	}else{
	    cout<<y<<" "<<x<<" ";
	    cout<<setprecision(3)<<fixed<<(double)y/x;
	}
	return 0;
}
