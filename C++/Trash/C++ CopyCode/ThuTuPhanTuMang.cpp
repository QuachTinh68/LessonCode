#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,d,t=0;
    cin >>n;
    int a[n],b[n];
    for(int i=1;i<=n;i++)
    {cin >>a[i];}
    for (int i=1; i<=n;i++){int c=1;
    for (int j=1;j<=n;j++){
        if (a[i]<a[j]){c++;}}
        b[i]=c;}
        for (int i=1;i<=n;i++){
            cout<<a[i]<<" "<<b[i]<<endl;
            
        
    }
}

