#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	while (n--) 
	{
		string s;
		cin >> s;
		int sum=0;
		for (int i=0; i<s.size();i++)
		{
			if ((int) s[i] %2 == 0)
			{
				sum += (int) s[i]-48;
			}
		}
		cout << sum << endl;
	}
	return 0;
}


