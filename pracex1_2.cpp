#include <iostream>
using namespace std;

int main(){
	double sum = 0;
	double x;
	int i;
	cout << "Enter x: ";
	cin >> x;
	while(i < x){
		if(x != 0){
			sum = sum + x;
			cout << "Enter x: ";
			cin >> x;		
		}
		
	}
	sum = sum + x;
	cout << "sum = " << sum;
	return 0;
}
