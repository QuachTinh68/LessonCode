#include <bits/stdc++.h>
using namespace std;
bool checkSquare(int n)
{
	if (n<1) return false; 
	int i=1;
	while (i*i<=n)
	{
		if (i*i==n) {
			return true;
		} 
		i++;
	}
	return false;
} 
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for (int i=0;i<n;i++)
	{
		if (checkSquare(a[i])==true)
		{
			if (a[i]<a[i+1]) cout << a[i] << " ";
		}
	}
}

