#include<iostream>
#define M 1000000007
using namespace std;
int main(){
    int T;
    cin >>T;
    long long S=0, n;
    while(T--)
    {
    	cin >> n;
    	if(n%2 == 0){
    		S = ((1+(n%M)*(n%M)%M)*(n%M))%M;
		}
		else{
			S = ((1+(n%M)*(n%M)%M)*(n%M) - ((n)/2)*(n%M)%M - (n)/2 -1)%M;
		}
		cout << S%M <<endl;
	}
}

