#include <iostream> 
#include <iomanip>
using namespace std;
 
int main() {
	int n; cin >> n; 
   int arr[n] ;
   int i, total = 0;
   int size = sizeof arr / sizeof arr[n];  
   for(i = 0; i < size; i++) {
      cout<<" "<<arr[i];
    }    
   for(i = 0; i < size; i++) {
      total = total + arr[i];
    }     
   cout << (float) total / size;
   return 0;
}
