#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

int main(){
	srand(time(0));
	int x = pow(2, rand()%10+1);
	std :: cout << x;
	return 0;
}
