#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[][101],int m, int n)
{
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin >> a[i][j];
}

void chuyendoi(int a[][101],int m,int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout << a[j][i] << " ";
		}
		cout << "\n";
	}
		
	
}





int main()
{
	int m,n;
	cin >> m >> n;
	int a[101][101];
	nhapmang(a,m,n);
	chuyendoi(a,m,n);
	
}
