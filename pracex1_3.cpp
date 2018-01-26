#include <iostream>
#include <cmath>
using namespace std;

double sumSqrt(int N){
	int i = 0;
	double sum = 0;
	double count;
	while(i < N){
		double count = 1/(sqrt(1+i));
		sum = sum + count;
		i++;

	}
	return sum;
}

int main(){
	int N;
	cin >> N;
	cout << sumSqrt(N);
	return 0;
}
