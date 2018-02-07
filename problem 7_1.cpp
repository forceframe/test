#include <iostream>
using namespace std;

int main(){
	char x;
	cout << "Input : ";
	cin >> x;
	
	switch(x){
		case 'A':
			cout << "Awesome";
			break;
		case 'B':
			cout << "Great";
			break;
		case 'C':
			cout << "Good";
			break;
		case 'F':
			cout << "Noob";
			break;
		default:
			cout << "Error: Invalid Input";
	}
	return 0;
}
