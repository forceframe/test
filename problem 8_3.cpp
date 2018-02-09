#include <iostream>
using namespace std;

int main(){
	int x, i = 1, min, num;
	do{
		cout << "Input number: ";
		cin >> x;
		if(i == 1){
			min = x;
		}else if(x <= min && x != 0 ){
			min = x;
		} 
	}while(x > 0);
	if(min < 0){
		cout << "Minimum = N/A";
	}else{
		cout << num;
	}
	return 0;
}
