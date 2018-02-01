#include <iostream>
using namespace std;

int main(){
	int a = 2, b = 3, c = 4;
	c = b = 2 == a++;
	cout << c << "\n";
	cout << b << "\n";
	cout << a;
	return 0;
}
