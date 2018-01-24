#include <iostream>
#include <cmath>
using namespace std;

double output(double x)
{
	double y = sin(pow(x,3)*3.1416/180)/(log(((2*x)+1)/pow(x,2));
	return y;
}

int main()
{
	double x;
	cout << "x = ";
	cin >> x;
	cout << "y = " << output(x);
	return 0;
}
