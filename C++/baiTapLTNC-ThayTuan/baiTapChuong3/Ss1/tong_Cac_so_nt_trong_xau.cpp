#include<bits/stdc++.h>
using namespace std;
int kiemtra(long long x)
{
	int d = 0;
	for(int i=1; i<=x; i++){
		if(x%i == 0){
			d++;
		}
	}
	if(d == 2){
		return 1;
	}else{
		return 0;
	}
}
void songuyento(string str)
{
	string so = "";
	long long a[500];
	int dem = 0;
	for(int i=0; i<str.length(); i++){
		if(str[i]>='0' && str[i]<='9'){
			so += str[i];
		}else{
			if(so == ""){
				continue;
			}else{
				long long tong1 = 0;
				for(int j=0; j<so.length() ; j++){
					int s = so[j] - 48;
					tong1 += s*pow(10, so.length() - (j+1));
				}
				a[dem] = tong1;
				dem++;
				so = "";
			}
		}
	}
	if(so != ""){
		long long tong1 = 0;
		for(int j=0; j<so.length(); j++){
			int s = so[j] - 48;
			tong1 += s*pow(10, so.length() - (j+1));
		}
		a[dem] = tong1;
		dem++;
	}
	int j=0;
	long long b[100];
	for(int i=0; i<dem; i++){
		if(kiemtra(a[i]) == 1){
			b[j]=a[i];
			j++;
		}	
	}
	if(j==1){
		cout<<b[0];
	}
	else{
		long long tong = 0;
		for(int i=0; i<j-1; i++){
			cout<<b[i]<<" + ";
			tong+=b[i];
		}
		tong+=b[j-1];
		cout<<b[j-1]<<" = "<<tong;
	}
}
int main()
{
	string s;
	getline(cin, s);
	songuyento(s);
	return 0;
}

