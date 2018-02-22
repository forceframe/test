#include <iostream>
using namespace std;

template <typename Type>
void insert(const Type [], Type [], int,Type, int);

int main(){
	int N = 4;
	int x[N] = {1, 4, 9, 7}, y[N+1], z[N+1];
	
	insert(x, y, N, 69, 2); 
	insert(x, z, N, 77, 0);
	
	cout << "x = ";
	for(int i = 0; i <N; i++) cout << x[i] << " ";
	
	cout << "\ny = ";
	for(int i = 0; i < N+1; i++) cout << y[i] << " ";
	
	cout << "\nz = ";
	for(int i = 0; i < N+1; i++) cout << z[i] << " ";
	return 0;
} 

template <typename Type>
void insert(const Type x[], Type sum[], int N, Type num, int n){
	for(int i = 0; i < n; i++){
		sum[i] = x[i];
	}
	sum[n] = num;
	for(int j = n+1; j < N+1; j++){
		sum[j] = x[j-1];
	}
	
		
	}
