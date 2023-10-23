#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0], smax=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        smax=i;
        } 
    }
    int min=max, smin=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
        min=a[i];
        smin=i;
        } 
    }
    int khoangcach=abs(smax-smin);
    cout<<khoangcach;
    return 0;
}
