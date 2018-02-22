#include <iostream>
#include <cmath>
using namespace std;

int function(int x);

int main(){
	int N;
	cout << "2 + 2^2 + 2^3 + 2^4 +...+ 2^N\n";
	cout << "N : ";
	cin >> N;
	cout << function(N);
	return 0;

}

int function(int x){
	if( x >= 1){
		return pow(2, x) + function(x-1);
	}
}
