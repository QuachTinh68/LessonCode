#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>n>>a>>b;
	int t=0;
	for(int i=1;i<=n;i++){
		int f=i;
		long long s=0;
		while (f>0){
		    s += f%10;
		    f /= 10;
		}
		if (s>=a&&s<=b) t=t+i;
	}
	cout<<t<<endl;
}
