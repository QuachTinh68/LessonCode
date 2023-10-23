#include<bits/stdc++.h>
using namespace std;
bool ispri(long long n)
{
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0) return false;
	return true;
}
int main()
{
	long long n;
	cin>>n;
	long long s=0,p=0;
	long long cur=2;
	while(n>1)
	{
		if(ispri(cur))
		{
			if(!ispri(n))
			{
				long long dem=0;
				while(n%cur==0)
				{
					n=n/cur;
					dem++;
				}
				if(dem%2==0) s+=dem;
				else p+=dem;
			}
			else
			{
				p+=1;
				n=1;
			}
		}
		if(cur==2) cur++;
		else cur+=2;
	}
	cout<<s<<"\n"<<p;
}

