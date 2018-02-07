#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double sum = 0;
	double count;
	double i = 0;
	cout << setprecision(10);
	while(i <= 222 ){
		sum = sum + count;
	    count = 1/(2+i);
	    i += 2;
	}
	cout << sum;
	return 0;
}
