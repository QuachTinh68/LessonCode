#include<iostream>
using namespace std;
int main(){
	int n,x,ga,cho,y;
	cin>>x>>y;
	ga=(4*x-y)/2;
    cho=(y-2*x)/2;
	if(ga+cho==x&&ga>0&&cho>0){

	cout<<"\nga = "<<ga;
	cout<<"\ncho = "<<cho;
}
	else
	cout<<"-1";
	return 0;
}
