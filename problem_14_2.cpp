#include <iostream>
using namespace std;

void myfunc(int &x, int &y){
	int temp = x;
	x += y/2;
	y += temp/2;
}

int main(){
	int x , y;
	cout << "x = " << myfunc(&4, &2);
	
}
