include<bits/stdc++.h>
using namespace std;

int main (){
	float  x; cin >> x;
	float f,g;
	g=2*pow(x, 3) - x;
	if (x>-1 and 1>x){
		f=1/(1 - pow(x,2));
	}else if (x<=-1){
		f= x - 2*pow(x, 3);
	}else{
		f=sqrt(pow(x, 2) + 1 );
	}
	cout <<fixed<<setprecision(4)<< f <<" "<< g << endl;
	if(f>g){
		cout << "YES";
	}else {
		cout << "NO";
	}
	return 0;
}
