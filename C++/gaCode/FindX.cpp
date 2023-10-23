#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;

	cin >> a >>b;
	if (a==0 && b==0){
		cout <<"Many Solutions";
	}if(a==0 && b!=0){
		cout << "No Solution";
	}if(a!=0){
		cout <<fixed << setprecision(2)<< (float)-b/a;
	}
}
