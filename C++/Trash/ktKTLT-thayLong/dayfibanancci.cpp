#include <bits/stdc++.h>
using namespace std;
bool prime (int n)
{
	if (n<2) return false;
	for(int i=2; i<=sqrt(n); i++)
	{
		if (n%i==0) 
			return false;
	}
	return true;
}
void Fibonancci (int n)
{
	int f0=0;
	int f1=1;
	int fn=1;
	for (int i=2;i<n;i++)
	{
		f0=f1;
		f1=fn;
		fn=f0+f1;
		if (prime(fn) && fn<n)
		{
			cout << fn << " ";
		}
	}
}
int main()
{
	int n;
	cin >> n;
	Fibonancci(n);
	return 0;
}