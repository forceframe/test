#include <iostream>
using namespace std;

char printPattern1(int N, int M){
	if(N > 0 && M > 0){
		for(int i = 0; i < N; i++){
			if(i % 2 == 0){
				for(int j = 0; j < M; j++){
					if( j % 2 == 0){
						cout << 'o';
					}else cout << 'x';
				}else{
					for(int k = 0; k < M; k++){
						if(k%2 == 0){
							cout << 'x';
						}else{
							cout << 'o';
						}
					}
				}
			}
			
		}
	}else{
		cout << "Invalid input";
	}

	return 0;
}

int main(){
	int N, M;
	cout << printPattern1(2, 2);
	return 0;
	
	 
}
