#include <bits/stdc++.h>
using namespace std;

class Pt{
	private:
		string hang, tenpt;
		int nam;
		float vantoc;
	public:
		Pt(){
			hang = tenpt =  " ";
			nam=0;
			vantoc = 0.0;
		}
		Pt(string tenhang, string namept, int y, float vt){
			hang = tenhang;
			tenpt = namept;
			nam = y;
			vantoc = vt;
		}
		void nhap();
		void in();
		
};