#include <bits/stdc++.h>
using namespace std;
void  Tong(int vec1[], int vec2[],int n){
	cout <<"Nhap so phan tu mang a: "<< endl;
	for (int i=0;i<n;i++){
		cin >> vec1[i];
	}
	cout <<"Nhap so phan tu mang b: " << endl;
	for (int i=0;i<n;i++){
		cin >> vec2[i];
	}
	int res[n];
	for(int i=0;i<n;i++){
		res[i]=vec1[i]+vec2[i];
	}
	cout << "Tong hai mang la: "<<endl;
	for(int i=0;i<n;i++){
		cout << res[i] << " ";
	}
	cout << endl;
}

void  Tong(int vec1[][100], int vec2[][100],int n,int m){
	
	cout <<"Nhap so phan tu mang hai chieu a: "<< endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> vec1[i][j];
		}
	}
	cout <<"Nhap so phan tu mang hai chieu b: " << endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++)
			cin >> vec2[i][j];
	}
	int res[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			res[i][j]=vec1[i][j]+vec2[i][j];
	}
	cout << "Tong hai mang hai chieu la: "<<endl;
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout << res[i][j] << " ";
		}
		cout << endl;	
	}
}

int main(){
	int n,m; 
	float a,b,c,d;
	cout <<"Nhap n: ";cin >> n;
	cout <<"Nhap m: ";cin >> m;
	int vec1[100][100], vec2[100][100];
	int arr[n], arr2[n];
	Tong(arr,arr2,n);
	Tong(vec1,vec2,n,m);
}