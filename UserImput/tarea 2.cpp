#include <iostream>
using namespace std ; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x, y ;
	int sum ; 
	cout << "type a number :";
	cin >> x; 
	cout << "type another number: ";
	cin >> y; 
	sum = x+y; 
	cout << "sum is: "<< sum;
	return 0;
}
