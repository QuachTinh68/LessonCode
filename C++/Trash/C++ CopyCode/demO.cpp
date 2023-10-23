#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[2][1005]={0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			int aij;
			cin>>aij;
			a[0][i]+=aij;
			a[1][j]+=aij;
		}
	}
	int dem=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[0][i]==a[1][j])
			{
				dem++;
			}
		}
	}
	cout<<dem;
}

