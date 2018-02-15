#include <iostream>
using namespace std;

int x = 4;

double myfunction(int a, double b){
	return x+a+b/2;
}

int main(){
	cout << "x = " << x++ << "\n";
	int x = 10;
	cout << "Result = " << myfunction(x,::x);
	return 0;  
}
