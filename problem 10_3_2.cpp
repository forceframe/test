#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));
	int x = (rand()%2)+(rand()%2);
	cout << x;
	return 0;
}
