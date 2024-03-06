#include <iostream>
using namespace std;  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// outer loop
	for (int i=1; i<=2 ; ++i){
		cout << "outer:" <<i << "\n"; // executes 2 times
		
		//  inner loop 
		for (int j = 1; j <=3; ++j){
			cout << "inner: " << j << "\n"; // executes 6  times (2 * 3 )
		}
	}
	return 0;
}
