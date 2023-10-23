#include<bits/stdc++.h>
using namespace std;

int main()
{
	string names[100];
	string name;
	int n = 0;
	int words = 0;
	while(getline(cin, name))
	{
		bool valid = true;
		for(int e = 0; e < name.length(); e++)
		{
			if(!isalpha(name[e]) && !isspace(name[e]))
			{
				valid = false;
				break;
			}
		}
		if(!valid)
			continue;
		stringstream s(name);
		string ss = "";
		string a;
		while(s >> a)
		{
			ss += a;
			ss += " ";
			words++;
		}
		int i = ss.length() - 2;
		while(isalpha(ss[i]))
		{
			i--;
		}
		int j = i + 1;
		for(; j < ss.length() - 1; j++)
		{
			ss[j] = toupper(ss[j]);
		}
		names[n] = ss.substr(i + 1, ss.length() - 1 - i) + ss.substr(0, i);
		for(int k = ss.length() - 1 - i; k < names[n].length() ; k++)
		{
			if(names[n][k - 1] == ' ' && isalpha(names[n][k]))
			{
				names[n][k] = toupper(names[n][k]);
			}
			else
			{
				names[n][k] = tolower(names[n][k]);	
			}
		}
		n++;
	}
	sort(names, names + n);
	cout << n << " " << words << endl;
	for(int m = 0; m < n; m++)
	{
		cout << names[m] << endl;
	}
}