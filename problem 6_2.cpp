#include <iostream>
using namespace std;

char func2(char x){
	char a[] = { 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
	int i = 0;
	while(i < 11){
		if(x == a[i] || x == a[i+1] || x == a[i+2] || x == a[i+3] || x == a[i+4] || x == a[i+5] || x == a[i+6] || x == a[i+7] || x == a[i+8] || x == a[i+9]){
			return 'y';
		}else{
			return 'n';
		}		
	}
	
}

int main(){
	char s;
	cout << "Input : ";
	cin >> s;
	cout << "Output : " << func2(s);
	return 0;
}
