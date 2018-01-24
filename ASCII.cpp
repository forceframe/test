#include <iostream>
using namespace std;

int main()
{
	cout << "Here is my ASCII values base on my system\n";
	for(int i = 0; i < 128; i++ )
	{
		cout << i << " = " << char(i) << endl; 
	}
	return 0;
}
