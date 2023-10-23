#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 8; i++) {
        cout << "*";
    	}
    cout << endl;
    for (int i = 0; i < 6; i++) {
        cout << "*" <<"\n";}
	for (int i = 0; i < 5; i++) {
	    for (int j = 0; j < i; j++) {
	            cout << " ";
	        }
	    	cout << "*" << endl;
		}	    
	cout << "\n";
	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << " ";}        
			    cout << "*" << std::endl;
		}
    return 0;
}

