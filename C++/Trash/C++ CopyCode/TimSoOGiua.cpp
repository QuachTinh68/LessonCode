#include<bits/stdc++.h>
using namespace std;
int main()
{//423129138 529352095
	long long l,r;
	cin>>l>>r;
	long long s=(r-l+1)*(l+r)/2;
	//cout<<s<<" "<<s/2<<" ";
	s=s/2;
	long long i=l;
	while(s>=0&&s>=abs(s-i))
	{
		s=s-i;
		i++;
	}
	cout<<i-1;
}
