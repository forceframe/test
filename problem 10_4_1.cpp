#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));
	int x = rand()%100+1;
	cout << x;
	return 0;
} 
