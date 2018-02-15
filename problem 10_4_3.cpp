#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
	srand(time(0));
	int x = rand()%11-5;
	std :: cout << x;
	return 0;
}
