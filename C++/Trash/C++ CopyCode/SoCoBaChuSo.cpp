#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin >> str)
    {
        set <string> number;
        int i=0;
        while(i<str.length()-2)
        {
            string check = str.substr(i, 3);
            if(check[0]!='0') number.insert(check);
            i++;
        }
        cout << number.size() << endl;
    }
    return 0;
}
