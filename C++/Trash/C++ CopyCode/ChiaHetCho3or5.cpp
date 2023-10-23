#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll MAX = 1e10 + 7;
ll n;
int main() {
	cin >> n;
	
	ll answer = 0;
	
	answer += (n/3) + (n/5);
	answer -= (n/15);
	
	cout << answer;
}

