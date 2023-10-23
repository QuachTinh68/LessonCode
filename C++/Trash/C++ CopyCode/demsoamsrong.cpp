#include <bits/stdc++.h>
using namespace std;
 bool isArm(int n){
     int len=0;int tmp=n;
     while (tmp!=0){len++; tmp=tmp/10;}
     int s=0;
     tmp=n;
     while (tmp!=0){s = s + pow(tmp%10, len); tmp=tmp/10;}
     if (s==n) return true;
     else return false;
 }
 int main()
 {
     cout << fixed << setprecision(9);
     int n; cin >> n;
     int arr[n+1];
     for (int i=0; i<n; i++) cin >> arr[i];
     
     int c=0;
     for (int i=0; i<n; i++)
        if (isArm(arr[i])==true)
     c++;
     cout << c;
     return 0;
}