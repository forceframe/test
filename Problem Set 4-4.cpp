#include <iostream>
#include <cmath>
using namespace std;

double output1(double x)
{
	return sin(pow(x,3)*(3.1416/180));
}

double output2(double x)
{
	return log(2*x+1)-log(pow(x,2));
}

int main()
{
	double x;
	cout << "x = ";
	cin >> x;
	cout << "y = " << output1(x)/output2(x);
	return 0;
}
