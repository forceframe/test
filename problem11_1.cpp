#include <iostream>
using namespace std;

template <typename T>
T shifting(T, int);

int main(){
	cout << shifting ('A', 5.5);
}

template <typename T>
T shifting (T x, int y){
	return x+y;
}
