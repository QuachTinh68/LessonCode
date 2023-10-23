#include <bits/stdc++.h> 
int main()
{
   int n, S; 
   cin >> n; 
   int A[n]; 
    for(int i = 0; i<n;i++)
    {
        cin >> A[i];
    }
    int maxx = A[0];
    for(int i = 0; i<n;i++)
    {
        if(A[i] > maxx) maxx = A[i];
    }
 
    int minn = A[0];
        for(int i = 0; i<n;i++)
    {
        if(A[i] < minn) minn = A[i];
    }
    S=maxx-minn;
	cout << S;    
    return 0
}
