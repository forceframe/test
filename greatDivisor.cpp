#include <iostream>
#include <cmath>
using namespace std;

int greatDivisor(int x){
	int i = x-1;
	while(i < x || i != 0){
		if(x % i == 0){
			return i;
		}
		i--;
	}
}

int main(){
	int x;
	cout << "input = ";
	cin >> x;
	cout << "\nExpected output = " << greatDivisor(x);
	return 0;
}


