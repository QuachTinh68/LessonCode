#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y; cin >> x >> y;
	if ((x>0) && (y>0)) cout << "The coordinate point" <<" "<< "("<< x << ","<< " "<< y << ")"<< " "<< "lies in the I quandrant";
	if ((x<0) && (y>0)) cout << "The coordinate point"  <<" "<< "("<< x << ","<< " "<< y << ")"<< " "<< "lies in the II quandrant";
	if ((x<0) && (y<0)) cout << "The coordinate point"  <<" "<< "("<< x << ","<< " "<< y << ")"<< " " << "lies in the III quandrant";
	if ((x>0) && (y<0)) cout << "The coordinate point"  <<" "<< "("<< x << ","<< " "<< y << ")"<< " " << "lies in the IV quandrant";
	if ((x==0) && (y==0)) cout << "The coordinate point" <<" "<< "("<< x << ","<< " "<< y << ")"<< " " << "lies at the origin";
