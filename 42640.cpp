#include <iostream>
using namespace std;

int main()
{
	int sum;
	int count = 10;
	while(count <= 50){
		sum = sum + (count)*(count);
		count = count + 1;
	}
	cout << sum;
	return 0;
}
