#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0, count = 1;
	while(count <= 10){
		cout << "Enter number [" << count << "]: ";
		cin >> num;
		sum = sum+num;
		count = count+1;
	}
	cout << "Average = " << sum/10.0;
	return 0;
}
