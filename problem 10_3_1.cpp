#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int x = 10*(rand()%5-2);
	cout << x;
	return 0;
}
