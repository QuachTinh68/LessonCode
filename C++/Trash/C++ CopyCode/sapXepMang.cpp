#include<bits/stdc++.h>
int main() 
{
	int n,s=0;
	 cin >> n;
    int a[n];
    for (int i = 0; i <n; i++) 
	{
       cin >> a[i];
    }
    for (int i = 0; i <n-1; i++) 
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (abs(a[i])<abs(a[j]))
			{
                int temp = a[i]; 
                a[i] = a[j];
                a[j] = temp;
            }
            else if ((abs(a[i])==abs(a[j]) && a[i]<a[j]))
            	{
                int temp = a[i]; 
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) 
	{
        cout << a[i];
    }
    return 0;
}
