#include <bits/stdc++.h>

using namespace std;

int longest_palindrome(string s){
    unordered_map<char,int> mp;
    for (char x: s){
        mp[x]++;
    }
    int res = 0;
    unordered_map<char,int>::iterator it;
    bool flag = false;
    for (it = mp.begin(); it != mp.end(); it++){
        if (it->second %2 == 1)
            flag = true;
        res += 2*(it->second / 2);
    }
    return flag? res+1:res;
}
int main(){
    int q; cin>>q;
    while (q--){
        string s; cin>>s;
        cout<<longest_palindrome(s)<<endl;
    }
}

