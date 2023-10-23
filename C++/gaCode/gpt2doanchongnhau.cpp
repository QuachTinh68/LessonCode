#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    char S;
   
    int n;
    int a[n];
    cin >> S >> n;
    for(int i=0;i<n;i++)
    	cin >> a[i];
    for(int i=0;i<=n;i++){
    	int count=0;
    	for (int j=1;j<=a[i];j++){
    		count++;
    		if(count==j){
    			cout<< S;
			}
		}
	}

    return 0;
}
