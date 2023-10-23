#include <bits/stdc++.h>
#define EPS 1e-9
using namespace std;
int main(){
	double a,b,c;
	cin >> a >> b >> c;
	if (fabs (a-b)<=EPS && fabs(a-c)<=EPS && fabs(b-c)<=EPS)
	{
		cout << "Tam giac deu";
	} else if (fabs (a-b)<=EPS || fabs(a-c)<=EPS || fabs(b-c)<=EPS ){
		cout << "Tam giac can";
	}else {
		cout << "Tam giac thuong";
	}
	return 0;
}
