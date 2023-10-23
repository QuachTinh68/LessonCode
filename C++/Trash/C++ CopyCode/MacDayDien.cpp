#include<bits/stdc++.h>
using namespace std;
struct tp{
	int x,y;
	int d;
};
tp a[505];
double kc(int x1,int y1,int x2,int y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int n;
int main(){
	cin>>n;
	int slnha0=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y>>a[i].d;
		if(a[i].d==0)slnha0++;		
	}
	//
double kf[505][505];
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		kf[i][j]=kc(a[i].x,a[i].y,a[j].x,a[j].y);
		}
	}
	//
	double kq;
	for(int i=1;i<=slnha0;i++){
		int vt;
		float gt=INT_MAX;
		for(int j=1;j<=n;j++){
			if(a[j].d==1){
				for(int k=1;k<=n;k++){
					if(a[k].d==0&& kf[j][k]>0 && kf[j][k]<gt){
						gt=kf[j][k];
						vt=k;
					}
				}
			}
		}
		a[vt].d=1;
		kq+=gt;
	}
   cout<<fixed<<setprecision(3)<<kq;
	return 0;
	
}
