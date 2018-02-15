#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	srand(time(0));
	int x = pow(10, rand()%4);
	cout << x;
	return 0;
}
