#include <iostream>
using namespace std;

unsigned long long fibonacci(int x);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	return 0;
}

unsigned long long fibonacci(int x){
	if( x == 0){
		return 0;
	}else if( x == 1){
		return 1;
	}else if( x > 1){
		for(int i = 1; i =< x; i++){
			int y, x;
			y += (x+1) + (x-1); 
		}
	}
	return y;
}
