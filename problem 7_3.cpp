#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int X, Y, Z;
	cout << "get X : ";
	cin >> X;
	cout << "get Y : ";
	cin >> Y;
	if(X >= 20 && Y >= 20 && X + Y >= 50){
		if(Y > X){
			Y = 2 * Y;
			Z = (X + Y)/2;
			cout << Z;
		}else{
			Z = (X + Y)/2;
			cout << Z;
		}
	}else{
		Z = sqrt(pow(X, 2) + pow(Y, 2));
		if(Z > 50){
			Z = 50;
			cout << Z;
		}
		cout << Z;
		
	} 
	return 0;
}

