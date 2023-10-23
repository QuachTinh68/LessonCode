include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll a[100111];
ll n;

int main() {
	cin >> n;
	
	ll sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	
	float answer = (float) sum / (float) n;
	
	cout << fixed << setprecision(4) << answer;
}
