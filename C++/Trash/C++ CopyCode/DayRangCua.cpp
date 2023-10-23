#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,so;
	cin >> n;
	int a[n];
	for(int i=1;i<=n;i++)
		cin >> a[i];
	if(a[1]>a[2])
		so=1;
	else if(a[1]<a[2])
		so=-1;
	else
	{
		cout << "No  2";
		return 0;
	}
	for(int i=2;i<n;i++)
	{
		if((a[i]<a[i+1] && so==1) ||( a[i]>a[i+1] && so==-1))
			so*=-1;
		else
		{
			cout << "No "<< i+1;
			return 0;
		}
	}
	cout << "Yes";
}

