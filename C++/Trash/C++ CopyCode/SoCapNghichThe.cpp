#include "bits/stdc++.h"

using namespace std;

int main(){

    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l,r;
    while(q--){
        cin>>l>>r;
        l--;
        r--;
        int cnt=0;

        for(int i=l;i<=r;i++){
            for(int j=i+1;j<=r;j++){
                if(arr[i]>arr[j]){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
