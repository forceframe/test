#include <iostream>
#include <cmath>
using namespace std;

double function(int x);

int main(){
	int N;
	cin >> N;
	cout << function(N);
	return 0;
}

double function(int x){
	if(x >= 0){
		return 1+(x/(1+(function(x-1))));
	}
}
