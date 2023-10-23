#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	long long n;
	int bon=0,bay=0;
	long long tmp=n;
	for (int i=0;i<n;i++){
		cin >> n;}		
		while (tmp!=0){
			int Cs=tmp%10;
			tmp/=10;
			if (Cs==4) {
			bon++;}
			else
			if (Cs==7) {
			bay++;}			
		} 
	int dk=bon+bay;	
	if (dk==4 || dk==7) {
	cout << "Yes" <<endl;}
	else cout << "No" << endl;
	}
