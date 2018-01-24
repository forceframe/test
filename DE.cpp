#include <iostream>
using namespace std;

int main()
{
	int num = 4;
	if(num <= 3){
		cout << "A";
		if(num%4 == 0){
			cout << "B";
		}else{
			cout << "C";
		}
	}else{
		cout << "D";
		if(num%3 == 1){
			cout << "E";
		}else{
			cout << "F";
		}
	}
	return 0;
}
