#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int sum = 0;
	int count;
	int i = 3;
	while(i <= 333){
		sum += pow(i,3);
		i += 3;
		if(i <= 333){
			sum += pow(i,2);
			i += 3;
		}
	}
	cout << sum;
	return 0;
	
}
