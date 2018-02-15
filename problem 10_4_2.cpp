#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));
	int x = 2*(rand()%12 +1);
	cout << x;
	return 0;
}
