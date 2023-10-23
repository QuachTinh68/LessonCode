#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
	int n;
	ll s=1;
	cin >> n;
	if ((n==0) or (n==1))
	cout << "1";
	else {
	if (n%2!=0){
		for (int i=3; i<=n;i=i+2)
			s=s*i;
		cout << s;
	}else{
		for ( int i=2;i<=n;i=i+2)
			s=s*i;
			cout <<s;
		}
		}
	cout << fixed << setprecision(2);

 return 0;	
}
