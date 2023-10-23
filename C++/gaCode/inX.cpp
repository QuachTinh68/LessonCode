#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int z=n*2+1;
	for (int i=1;i<=n*2+1;i++){
		for (int j=1;j<=n*2+1;j++){
			if (j==i or j==z){
				cout<<"* ";
			}
			else
			cout<<". ";
		}
		z--;
		cout<<"\n";
	}
	return 0;
}