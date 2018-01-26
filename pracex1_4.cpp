#include <iostream>
#include <string>
using namespace std;


string compress(string y){
	int i = 0;
	string x[14] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N"};
	int z = 14;
	while(i < z){
		cout << x[i];
		i = i + 3;
	} 
	return y;
}

int main(){
	string y[14] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N"};
	cout << compress(y[14]);
	return 0;
}
